/****************************************
convert small letter to captial letter.
========================================
a: 01100001
mask: 11011111 <-- (0xDF) 11(0)11111
:---------
a&mask: 01000001 <-- A letter
*****************************************/
#include<iostream>
#include <bitset>
using namespace std;

int main()
{
	char op1 = 'a'; // "a" letter (i.e. small case)
	int mask = 0xDF; // choosing a proper mask
	cout<<"a (AND) mask = A\n";
	cout<<op1<<" & 0xDF: "<< (char)(op1 & mask);
	return 0;
}