#include <iostream>
#include "Basic.h"

using namespace std;

Singleton::Singleton* pInstance= nullptr;

int main(int argc, char const *argv[])
{
	Singleton* instance = Singleton::Instance();
	instance->print();
	Singleton* instance2 = Singleton::Instance();
	instance2->print();
	return 0;
}