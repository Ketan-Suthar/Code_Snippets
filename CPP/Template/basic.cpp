#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maximum(const T a, const T b)
{
	return a>b ? a : b; 
}

template <typename T, typename V>
V maximum2(const T a, const V b)
{
	return a>b ? a : b; 
}

void f1()
{
	cout<<maximum(10,20)<<"\n";
	cout<<maximum(10.52,10.522)<<"\n";
	cout<<maximum("A","Z")<<"\n";
	cout<<maximum2(10,10.2)<<"\n";
}
template<unsigned M, unsigned N>
int compare(const char (&p1)[M], const char (&p2)[N])
{
	return strcmp(p1,p2);
}

void f2()
{
	cout<<compare("hiii","hiii");
}
int main(int argc, char const *argv[])
{
	//f1();
	f2();
	return 0;
}