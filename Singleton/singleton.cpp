#include"singleton.h"

int main(){
	singleton * s = singleton::getInstance();
	s->singleton::releaseInstance();
}
