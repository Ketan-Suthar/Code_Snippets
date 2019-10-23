#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// basic allocation
void f1()
{
	int *pi = (int*)malloc(sizeof(int));
	*pi = 123;
	size_t size = sizeof(pi);

	cout<<"pi - add: "<<&pi<<" add point to: "<<pi<<" value pointed by: "<<*pi<<" size: "<<size;
	free(pi);

	cout<<"\n\nafter freeing: ";
	cout<<"\npi - add: "<<&pi<<" add point to: "<<pi<<" value pointed by: "<<*pi<<" size: "<<sizeof(pi);

	//*pi = 123; // even pi is still holding address previously pointed we cannot assign value
	pi = NULL;
	cout<<"\n\nafter freeing and assign NULL to pointer: ";
	cout<<"\npi - add: "<<&pi<<" add point to: "<<pi<< " size: "<<sizeof(pi);

}
//just for checking
void f2()
{
	char *name; // we doesnt allocated memory 
	cin>>name; //still we can store any size of name in  name variable
	cout<<name; // this is fine (maybe not in C)
}
// pointer to char array
void f3()
{
	char *string1;
	char *string2;
	string1 =(char*) malloc(16);
	strcpy(string1,"0123456789AB");
	cout<<"\nstring1 add: "<<&string1<<" value point to: " <<string1;
	string2 =(char*) realloc(string1,8);

	cout<<"\nstring2 add: "<<&string2<<" value point to: "<<string2;
	cout<<"\nstring1 add: "<<&string1<<" value point to: " <<string1;
}
int main(int argc, char const *argv[])
{
	//f1();
	//f3();
	
	return 0;
}