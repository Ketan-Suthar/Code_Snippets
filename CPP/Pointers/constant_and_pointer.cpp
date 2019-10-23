#include <iostream>

using namespace std;

// this is for pointer to a constant
void f1()
{
	int num = 5;
	const int limit = 505;

	int *pi;
	const int *pci;

	pi = &num;
	pci = &limit;

	cout<<"\nnum  - add: "<<&num<<" value: "<<num;
	cout<<"\nlimit  - add: "<<&limit<<" value: "<<limit;
	cout<<"\npi  - add: "<<&pi<<" value: "<<pi<<" pointed by: "<<*pi;
	cout<<"\npci  - add: "<<&pci<<" value: "<<pci<<" pointed by: "<<*pci;

	//we cant modify value pointed by pci
	//*pci = 100; // assignment is read-only location

	//but we can change pointer
	pci = &num;
	cout<<"\n after changing pci(pci = &num) \n";
	cout<<"\npci  - add: "<<&pci<<" value: "<<pci<<" pointed by: "<<*pci;

	//even num is not const we cant change its value using *pci	
	//*pci = 100; //error

	//below declaration is same as of pci's declaration

	int const *pci2;
	pci2 = &limit;
	cout<<"\npci2  - add: "<<&pci2<<" value: "<<pci2<<" pointed by: "<<*pci2;	

	pci2 = &num;

	cout<<"\n\n after changing pci2(pci2 = &num) \n";
	cout<<"\npci  - add: "<<&pci2<<" value: "<<pci2<<" pointed by: "<<*pci2;

	//same as pci , pci2 cant chage value its pointing to
	//*pci2 = 121; //error

}

// constant pointer to non-constant
void f2()
{
	int num = 123, num2 = 524;
	int * const cpi = &num;

	cout<<"\nnum  - add: "<<&num<<" value: "<<num;
	cout<<"\ncpi  - add: "<<&cpi<<" value: "<<cpi<<" value pointed by "<<*cpi;

	//we can modify value pointed by cpi
	*cpi = 150;
	cout<<"\n\nafter modifing value pointed by cpi\n";
	cout<<"\nnum  - add: "<<&num<<" value: "<<num;
	cout<<"\ncpi  - add: "<<&cpi<<" value: "<<cpi<<" value pointed by "<<*cpi;

	//but we cant change add stored by cpi
	//meant cpi cant point to another variable
	//cpi = &num; //error: assignment of read-only memory

	const int num3 = 500;
	// below declaration generates error: invalid conversation
	//int *const cpi2 = &num3;
	//cout<<"\nnum3  - add: "<<&num3<<" value: "<<num3;
	//cout<<"\ncpi  - add: "<<&cpi2<<" value: "<<cpi2<<" value pointed by "<<*cpi2;
}
int main(int argc, char const *argv[])
{
	//f1();
	f2();	
	return 0;
}