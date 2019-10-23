#include <iostream>
using namespace std;

typedef void (*funptr)(int);
typedef void (*fptroperation)(int,int);
void square(int n)
{
	cout<<"square of "<<n<<" is: "<<n*n;
}

void f1()
{
	funptr f1;
	f1 = square; // is same as f1 = &square;
	f1(5);
}
void add(int n,int m)
{
	cout<<n<<" + "<<m<<" = "<<n+m<<"\n";
}
void sub(int n,int m)
{
	cout<<n<<" - "<<m<<" = "<<n-m<<"\n";
}
void compute(fptroperation operation,int n,int m)
{
	operation(n,m);
}
fptroperation select(char op)
{
	switch(op)
	{
		case '+':	return add;
		case '-': return sub;
		default: return add;
	}
}
void initoperations(fptroperation *op)
{
	op['+'] = add;
	op['-'] = sub;
	op[0] = add;
	op[1] = sub;
}
void evalute(char op,int n,int m)
{
	fptroperation operation = select(op);
	operation(n,m);
}
void evalute2(char op,int n,int m)
{
	fptroperation operation[4] = {NULL};
	initoperations(operation);
	operation[op](n,m);
}
void f2()
{
	compute(add,10,20);
	compute(sub,20,200);

	//another way is using + or -
	evalute('+',20,25);
	evalute('-',20,25);
	evalute2('+',20,25);
	evalute2('-',20,25);
	evalute2(0,20,25);
	evalute2(1,20,25);
}
void f3()
{
	fptroperation fun = add;

	if(fun == add)
		cout<<"both fun and add are EQUAL";
	else
		cout<<"both fun and add are NOT EQUAL";
}
void f4()
{
	fptroperation f = add;
	funptr  f2 = (funptr)f;
	f = (fptroperation)f2;
	f(4,5);

}
int main(int argc, char const *argv[])
{
	f1(); //basic
	//f2(); // returning pointer and array of pointer
	//f3(); // comparing function pointers
	//f4(); // casting of function pointers
	return 0;
}