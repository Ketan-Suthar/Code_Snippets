#include<iostream>
#include <bitset>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	//The n & (n - 1) trick (see Remove rightmost set bit) is also useful to determine if an integer is a power of 2:
	bool power_of_2 = n && !(n & (n - 1));
	
	cout<<"is n power of 2: "<<power_of_2;
	//Note that without the first part of the check (n &&), 0 is incorrectly considered a power of 2.

	return 0;
}	