#include"singletonRef.h"

int main(){
	singletonRef * sR = &singletonRef::getInstance();
	singletonRef & sR2 = singletonRef::getInstance();
}
