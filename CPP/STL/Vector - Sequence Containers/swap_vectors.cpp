// CPP program to illustrate 
// Implementation of swap() function 
#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	// vector container declaration 
	vector<int> myvector1{ 1, 2, 3, 4 }; 
	vector<int> myvector2{ 3, 5, 7, 9 }; 

	// using swap() function to swap elements of vector 
	myvector1.swap(myvector2); 

	// printing the first vector 
	cout << "myvector1 = "; 
	for (auto it = myvector1.begin(); it < myvector1.end(); ++it) 
		cout << *it << " "; 

	// printing the second vector 
	cout << endl 
		<< "myvector2 = "; 
	for (auto it = myvector2.begin(); it < myvector2.end(); ++it) 
		cout << *it << " "; 
	return 0; 
} 
