#include<iostream>
#include <bitset>
using namespace std;
int main(int argc, char const *argv[])
{
	int a = 0b0;
	cout<<"a: "<<~a;
	
	bitset<10> x;
	x.set(); // Sets all bits to '1'
	cout<<"\nx: "<<x;

	
	return 0;
}