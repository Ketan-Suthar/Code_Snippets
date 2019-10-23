#include <iostream>

using namespace std;

void f1()
{
	int (*(arr[])) = {
		(int[]) {0,2,3,4},
		(int[]) {4,5},
		(int[]) {6,7,8}};
	int r = 0;
	for(int i=0;i<4;++i)
		cout<<"\narr["<<r<<"]["<<i<<" add: "<<&arr[r][i]<<" value: "<<arr[r][i];
	r= 1;
	for(int i=0;i<2;++i)
		cout<<"\narr["<<r<<"]["<<i<<" add: "<<&arr[r][i]<<" value: "<<arr[r][i];
	r = 2;
	for(int i=0;i<3;++i)
		cout<<"\narr["<<r<<"]["<<i<<" add: "<<&arr[r][i]<<" value: "<<arr[r][i];
}

int main(int argc, char const *argv[])
{
	f1(); // jagged array 
	return 0;
}