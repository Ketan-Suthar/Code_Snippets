#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main() 
{ 
	int *arr = (int*)malloc(sizeof(float) * 20); 
	cout<<sizeof(arr); // this is will not print wht we want because its pointer
	// size  will be sizeof(float)*20 / sizeof(int)
	cout<<"\n actual size of arr : "<<(sizeof(float)*20) / sizeof(int);
	return 0; 
}
