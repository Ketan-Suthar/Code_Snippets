// CPP program to illustrate 
// use of cbegin() 
#include <iostream> 
#include <string> 
#include <vector> 

using namespace std; 

void f1()
{
	vector<string> vec; 

	// 5 string are inserted 
	vec.push_back("first"); 
	vec.push_back("second"); 
	vec.push_back("third"); 
	vec.push_back("fourth"); 
	vec.push_back("fifth"); 

	// displaying the contents 
	cout << "Contents of the vector:" << endl; 
	for (auto itr = vec.cbegin(); itr != vec.end(); ++itr)
		cout << *itr << endl;
}


int main() 
{ 
	f1();
	return 0; 
} 
