#include<iostream>
#include <bitset>
using namespace std;
int main(int argc, char const *argv[])
{
	int num=25;
	bitset<20> x(num);
	cout<<"num: "<<x;

	//now we want check if bit is 4 set
	cout<<"\n"<<((num >> 1) && 1LL);

	std::bitset<4> num2(std::string("0010"));
	bool bit_val = num2.test(2); // bit_val value is set to true;

	cout<<"\nbit_val: "<<bit_val;

	return 0;
}