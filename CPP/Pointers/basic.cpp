#include <iostream>
using namespace std;

void f1()
{
	int x=10;
	int *ptr = &x;
	cout<<"address of &x "<<&x;
	cout<<"\nvalue of &x "<<x;
	cout<<"\n address of &ptr "<<&ptr;
	cout<<"\n value stored in ptr "<<ptr;
	cout<<"\n value pointed by *ptr "<<*ptr;

	int *ptr2;
	ptr2 = ptr;
	cout<<"\naddress stored in ptr2 "<<ptr2;
	cout<<"\nvalue stored in ptr2 "<<*ptr2;
}
void f2()
{
	int *ptr;
	cout<<"\naddress of unini. ptr :"<<&ptr;
	cout<<"\naddress stored in unini. ptr :"<<ptr;
	cout<<"\nvalue stored in unini. ptr :"<<*ptr;

	if(ptr == NULL)
		cout<<"\nptr is NULL pointer";
	else
		cout<<"\nptr is not NULL pointer";

	ptr = NULL;
	cout<<"\naddress of NULL ptr :"<<&ptr;
	// program will crash if you try to print below two statement
	//cout<<"\naddress stored in NULL ptr :"<<ptr;
	//cout<<"\nvalue stored in NULL ptr :"<<*ptr;
	if(ptr == NULL)
		cout<<"\nptr is NULL pointer";
	else
		cout<<"oops something went wrong";

	int i = '\0';
	cout<<"\nvalue of ASCII NUL(\'\\0\') :"<<i;
}
void f3()
{
	int num = 100, *ptr;
	void *vptr;
	size_t vptrSize = sizeof(vptr), ptrSize = sizeof(ptr);

	cout<<"\n address of vptr "<<&vptr;
	cout<<"\n value stored in vptr "<<vptr;
	cout<<"\n size of ptr "<<ptrSize;
	cout<<"\n size of vptr "<<vptrSize;


	//cout<<"\n size of void "<<sizeof(void); //error: illegal
	
	//cout<<"\n value pointed by *vptr "<<*vptr; // error: vptr is not pointer-to-object

	ptr = &num;
	vptr = &num;
	cout<<"\n *ptr "<<*ptr;
	cout<<"\n vptr "<<vptr; // vptr is not p-to-obj

	vptr = ptr;
	cout<<"\n add of num "<<&num;
	cout<<"\n add of ptr "<<&ptr;
	cout<<"\n add of vptr "<<&vptr;
	cout<<"\n add stored in vptr "<<vptr;
	cout<<"\n value point by vptr "<<*(int*)vptr;
}
int main(int argc, char const *argv[])
{
	//f1(); // basic
	//f2(); // null ptr VS uninitilized ptr
	f3(); // basic of void ptr
	return 0;
}