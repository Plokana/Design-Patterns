#include<iostream>
#include<stdlib.h>
using namespace std;
class singletonRef {
	public:
		static singletonRef& getInstance(){
			cout<<"creating instance\n";
			static singletonRef m_instance;
			return m_instance;
		}

		private:
			singletonRef(){}
			~singletonRef(){cout<<"destructor\n";}

};
