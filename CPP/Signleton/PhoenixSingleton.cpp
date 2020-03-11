#include <iostream>
#include "PhoenixSingleton.h"
using namespace std;



Singletion* Singletion::pInstance_ =0;
bool Singletion::destroyed_ =false;

int main(int argc, char const *argv[])
{
	Singletion s();
	return 0;
}