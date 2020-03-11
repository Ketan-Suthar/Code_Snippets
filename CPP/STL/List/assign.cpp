#include <iostream>
#include <list>
using namespace std;

void f1()
{
	list<int> demo_list; 

	for(int i=0;i<10;++i)
		demo_list.push_back(i);
	cout<<"\nbefore assign list: ";
	for (int itr : demo_list) 
		cout << itr << " ";

	demo_list.assign(5, 100);
	cout<<"\nafter aasign list: ";
	for (int itr : demo_list) 
		cout << itr << " ";
}

void f2()
{
	list<int> first_list; 
  
    list<int> second_list;
    for(int i=0;i<10;++i)
		second_list.push_back(i);

  	cout<<"\nbefore assign second_list: ";
	for (int itr : second_list) 
		cout << itr << " ";

	first_list.assign(second_list.begin(),second_list.end());

	cout<<"\nafter aasign second_list to first_list: ";
	for (int itr : first_list) 
		cout << itr << " ";

}

int main(int argc, char const *argv[])
{
	//f1();
	f2();
	return 0;
}