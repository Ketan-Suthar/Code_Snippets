#include <iostream>
using namespace std;

class Singletion
{
	public:
		Singletion& Instance()
		{
			cout<<"\nInstance is called";
			if(!pInstance_)
			{
				if(destroyed_)
					OnDeadReference();
				else
					Create();
			}
			return pInstance_;
		}

	private:
		static void Create()
		{
			cout<<"\nCreate is called";
			static Singletion theInstance;
			pInstance_ = theInstance;
		}
		static void OnDeadReference()
		{
			cout<<"\nOnDeadReference called";
			Create();

			new(pInstance_) Singletion;
			atexit(KillPhoenixSingleton);
			destroyed_ =false;
		}
		void KillPhoenixSingleton()
		{
			pInstance_->~Singletion();
		}
		virtual ~Singletion()
		{
			cout<<"\nDestructor called";
			pInstance_ =0;
			destroyed_ =true;
		}
		static Singletion pInstance_
		static bool destroyed_;
};