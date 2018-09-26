

#include "Animal.h"


int main(int argc, char** argv) {

    setlocale (LC_ALL,"Russian");
    SetConsoleCP (1251);
    SetConsoleOutputCP(1251);

	Animal *ob = new Fish;
	Animal *ob1 = new Bird;

    ob -> Load();
    ob -> Check();

    ob1 -> Load();
    ob1 -> Check();

    int choice;

      do{

            ob -> ShowMenu();

            cin >> choice;
            cout << "\n\n";

               switch(choice){

                   case 1 :

                       ob -> Add();
                       ob -> Check();
                       ob -> Save();
                     break;

                   case 2 :

                       ob1 -> Add();
                       ob1 -> Check();
                       ob1 -> Save();
                     break;

                   case 3 :

                       ob1 -> Add();
                       ob1 -> Check();
                       ob1 -> Save();
                     break;

                   case 4 :

                       ob -> Add();
                       ob -> Check();
                       ob -> Save();
                     break;

                   case 5 :

                       ob -> Add();
                       ob -> Check();
                       ob1 -> Save();
                     break;

                   case 6 :

                       ob -> Add();
                       ob -> Check();
                       ob -> Save();
                     break;

                   case 7 :

                       ob -> Add();
                       ob -> Check();
                     break;

                   case 8 :

                       ob -> Add();
                       ob -> Check();
                     break;

                   default :

                       ob -> Save();
                       ob1 -> Save();
                     return 0;

               }
       }
     while(choice);

	return 0;
}

