// CPP program to illustrate 
// the vector::rbegin() function 
#include <bits/stdc++.h> 
using namespace std;

void f1()
{
    vector<int> v; 
    v.push_back(11); 
    v.push_back(12); 
    v.push_back(13); 
    v.push_back(14); 
    v.push_back(15); 
  
    // prints all the elements 
    cout << "The vector elements in reverse order are:\n"; 
    for (auto it = v.rbegin(); it != v.rend(); it++) 
        cout << *it << " ";
}

int main() 
{
    f1();
    return 0; 
} 