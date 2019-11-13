#include <iostream>
#include <cstring>
using namespace std;

void f1()
{
	cout<<"sizeof(char): "<<sizeof(char); 
	cout<<"\nsizeof(\'a\'): "<<sizeof('a'); //may give 4 depence of architech
}
void f2()
{
	//char *s = "sound"; //error: string constant to char*
	//*s = 'L'; also we cannt change value
	const char *s = "sound";
	cout<<s<<"\n";
	char h[] = "ketan suthar";
		// or 
		// char h[13]
		// strcpy(h,"ketan suthar"); // or h[0] = 'k' h[1] = 'e' ...
	cout<<h<<"\n";

	char *a;
	a = (char*)malloc(strlen("helllo world")+1);
	strcpy(a,"helllo world");
	cout<<a<<"\n";
}
int main(int argc, char const *argv[])
{
	//f1(); //basic
	f2(); //initialization
	return 0;
}