#include <iostream>

#include "ani.c"


int main(int argc, char** argv) {

	Animal *ob = new Fish;
	Animal *ob1 = new Bird;


	for(int i = 0 ; i < 3 ; i++) { ob -> Add(); }
    ob -> Check();




	//ob -> Add();
	//ob -> Check();

	//ob1 -> Add();
	//ob1 -> Check();

	return 0;
}

