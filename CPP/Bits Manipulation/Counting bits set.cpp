#include<iostream>
#include <bitset>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned value = 1023;
	unsigned bits = 0; // accumulates the total number of bits set in `n`

	for (bits = 0; value; value >>= 1)
		bits += value & 1;

	cout<<"bits count in 1023 :: "<<bits;
	value = 1024;
	bits = 0; // accumulates the total number of bits set in `n`
	for (; value; ++bits)
		value &= value - 1;
	cout<<"\nbits count in 1024 :: "<<bits;
	return 0;
}