#include <iostream>
#include <cstring>
using namespace std;

template <class T> 
void fun(T a) 
{ 
   cout << "The main template fun(): " 
        << a << endl; 
} 
  
template<> 
void fun(int a) 
{ 
    cout << "Specialized Template for int type: "
         << a << endl; 
}

void f1()
{
	fun<char>('a'); 
    fun<int>(10); 
    fun<float>(10.14);
}

template <class T> 
class Test 
{ 
  // Data memnbers of test 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "General template object \n"; 
   } 
   // Other methods of Test 
}; 
  
template <> 
class Test <int> 
{ 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "Specialized template object\n"; 
   } 
};

void f2()
{
	Test<int> a; 
    Test<char> b; 
    Test<float> c; 
}


int main(int argc, char const *argv[])
{
	//f1(); // function template specialization
	f2(); // class template specialization
	return 0;
}