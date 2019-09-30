#include<iostream>
#include <bitset>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 15;
	bitset<20> x(num);
	cout<<"\nbefore setting bit number: "<<x;
	// Bit x will be set
	num ^= (-1 ^ num) & (1LL << 5);
	x=  num;
	cout<<"\nafter setting number: "<<x;

	return 0;
}	