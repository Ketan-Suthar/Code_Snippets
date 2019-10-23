#include <iostream>
#include <cstring>
using namespace std;

typedef struct _person
{
	char* fn,*ln,*title;
	unsigned int age;
}Person;

void f1()
{
	Person *person;
	person = (Person*)malloc(sizeof(Person));
	person->fn = (char*)malloc(sizeof("ketan")+1);
	strcpy(person->fn,"ketan");
	person->ln = (char*)malloc(sizeof("suthar")+1);
	strcpy(person->ln,"suthar");
	person->title = (char*)malloc(sizeof("M.Sc(IT)")+1);
	strcpy(person->title,"M.Sc(IT)");
	person->age = 21;

	cout<<"\nfirst name: "<<person->fn;
	cout<<"\nlast name: "<<person->ln;
	cout<<"\ntitle: "<<person->title;
	cout<<"\nage: "<<person->age;
}

int main(int argc, char const *argv[])
{
	f1();
	return 0;
}