// INTEGER VECTOR EXAMPLE 
// CPP program to illustrate 
// Implementation of begin() function 
#include <iostream> 
#include <vector> 
using namespace std; 

void f1()
{
	// declaration of vector container 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
  
    // using begin() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << ' ' << *it; 
}
void f2()
{
	// declaration of vector container 
    vector<float> myvector{ 1.1, 2.2, 3.3, 4.4, 5.5 }; 
  
    // using begin() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << ' ' << *it; 
}
void f3()
{
	// declaration of vector container 
    vector<string> myvector{ "This", "is", 
                             "ketan" }; 

    // using begin() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << ' ' << *it;
    cout <<"\n" << *(myvector.begin());
    //cout <<"\n" << *(myvector.end()); // will not work
}
int main() 
{ 
    //f1();
    //f2();
    f3();
    return 0; 
} 