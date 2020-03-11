// CPP program to illustrate 
// Implementation of empty() function 
#include <iostream> 
#include <vector> 
using namespace std; 

void f1()
{
	vector<int> myvector{}; 
	if (myvector.empty()) { 
		cout << "True"; 
	} 
	else { 
		cout << "False"; 
	}
}
void f2()
{
	int sum = 0; 
    vector<int> myvector{ 1, 5, 6, 3, 9, 2 };
    cout << "size of vector is:: "<<myvector.size()<<"\n";
    while (!myvector.empty()) { 
        sum = sum + myvector.back(); 
        myvector.pop_back(); 
    } 
    cout <<"sum is: " sum; 
}
int main() 
{ 
	//f1();
	f2();
	return 0; 
} 
