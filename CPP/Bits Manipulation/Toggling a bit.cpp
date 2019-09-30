#include<iostream>
#include <bitset>
using namespace std;
int main(int argc, char const *argv[])
{
	int number=1023;
	bitset<20> x(number);
	cout<<"\nbefore toggling number: "<<x;
	number ^= 1LL << 1;
	x=  number;
	cout<<"\nafter toggling number: "<<x;

	std::bitset<4> num("0100");
	num.flip(2); // num is now 0000
	num.flip(0); // num is now 0001
	cout<<"\npostion 2 and 0 are fliped num: "<<num;
	num.flip(); // num is now 1110 (flips all bits)
	
	cout<<"\nall are fliped num: "<<num;
	return 0;
}