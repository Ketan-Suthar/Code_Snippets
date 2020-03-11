// CPP program to demonstrate 
// how to assign values to a vector 
// from a list 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> v1; 
	int a[] = { 1, 2, 3 }; 

	// assign first 2 values 
	v1.assign(a, a + 2); 

	cout << "Elements of vector1 are\n"; 
	for (int i = 0; i < v1.size(); i++) 
		cout << v1[i] << " "; 

	vector<int> v2; 
	// assign first 3 values 
	v2.assign(a, a + 3); 

	cout << "\nElements of vector2 are\n"; 
	for (int i = 0; i < v2.size(); i++) 
		cout << v2[i] << " "; 

	return 0; 
} 
