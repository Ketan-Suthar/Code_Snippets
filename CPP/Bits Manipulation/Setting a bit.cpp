#include<iostream>
#include <bitset>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 9;
	bitset<20> x(num);
	cout<<"\nbefore setting bit number: "<<x;
	// Bit x will be set
	num |= 1LL << 4;
	x=  num;
	cout<<"\nafter setting number: "<<x;

	std::bitset<5> num2(std::string("01100"));
	cout<<"\nnum2: "<<num2;
	num2.set(0); // num is now 01101
	num2.set(2); // num is still 01101
	num2.set(4,true); // num is now 11110
	cout<<"\nnum2: "<<num2;

	return 0;
}	