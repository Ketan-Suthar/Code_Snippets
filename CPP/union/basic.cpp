#include <iostream>
using namespace std;
struct str
{
	union
	{
		struct 
		{
			int a[101];
		};
		struct 
		{
			char c[404];
		};	
	};
	
};
	
int main(int argc, char const *argv[])
{
	str s;
	cout<<sizeof(s);
	return 0;
}