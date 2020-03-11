#include <iostream>

class Singleton
{
	public:
		static Singleton* Instance()
		{
			if(!pInstance)
				pInstance = new Singleton;
			return pInstance;
		}
		void print()
		{
			++num;
			std::cout<<"\n"<<num;
		}
	private:
		Singleton();
		Singleton(const Singleton&);

		static Singleton* pInstance;
		int num = 10;
};