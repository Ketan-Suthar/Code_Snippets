// CPP program to illustrate 
// Implementation of = operator

#include <iostream> 
#include <vector> 
using namespace std; 

void f1()
{
	vector<int> myvector1{ 1, 2, 3, 4, 5, 6, 7, 8 }; 
	vector<int> myvector2{ 3, 2 }; 
	cout << "myvector1 size before:  "<<myvector1.size()<<"\n";
	cout << "myvector1 capacity before:  "<<myvector1.capacity()<<"\n";
	myvector1 = myvector2; 
	
	cout << "myvector1 = "; 
	for (auto it = myvector1.begin(); it != myvector1.end(); ++it) 
		cout << ' ' << *it;
	cout << "\nmyvector1 size after:  "<<myvector1.size()<<"\n";
	cout << "\nmyvector1 capacity after:  "<<myvector1.capacity()<<"\n";
}
void f2()
{
	vector<int> myvector; 
    myvector.push_back(1); 
    myvector.push_back(2); 
    myvector.push_back(3); 
    myvector.push_back(4); 
    myvector.push_back(5); 
    myvector.push_back(6); 
    myvector.push_back(7); 
    myvector.push_back(8); 
    myvector.push_back(9); 
    // Vector becomes 1, 2, 3, 4, 5, 6, 7, 8, 9 
  
    for (int i = 0; i < myvector.size(); ++i) { 
        if (i % 2 != 0) { 
            cout << myvector[i]; 
            cout << " "; 
        } 
    } 
}
int main() 
{ 
	//f1();
	f2();
	return 0; 
} 
