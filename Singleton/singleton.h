#include <iostream>
#include <stdlib.h>

using namespace std;

class singleton {
	public:
		static singleton* getInstance(){
			cout<<"creating instance\n";
			m_instance = new singleton;
			return m_instance;
		}
//function to release instance
		static void releaseInstance(){
			cout<<"Release Instance\n";
			delete m_instance;
		}
	private:
		// make singleton class constructor private
		singleton(){}
//make destructor private so that accidently calling it will be avoided and dont delete instance in destructor otherwise it leads to infinite call to destuctor
		~singleton(){cout<<"I am destructor \n"; }//delete m_instance;}
		static int count;
		static singleton* m_instance;
};
int singleton::count = 0;
singleton* singleton::m_instance=NULL;
