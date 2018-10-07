

#include "Animal.h"


int main(int argc, char** argv) {

    setlocale (LC_ALL,"Russian");
    SetConsoleCP (1251);
    SetConsoleOutputCP(1251);

	Animal *ob =  new Fish;
	Animal *ob1 = new Bird;
	Animal *ob2 = new Cat;

	Menu Menu;

    ob -> Load();
    ob -> Check();
    cout << "\n\n";
    ob1 -> Load();
    ob1 -> Check();
    cout << "\n\n";
    ob2 -> Load();
    ob2 -> Check();

    int choice;

      do{

            Menu.ShowMenu();

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

                       ob2 -> Add();
                       ob2 -> Check();
                       ob2 -> Save();
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

