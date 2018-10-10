

#include "Animal.h"
#include "ColourMenu.h"


int main(int argc, char** argv) {

    SetConsoleCP (1251);
    SetConsoleOutputCP(1251);
    Menu Menu;

	Animal *ob =  new Fish;
	Animal *ob1 = new Bird;
	Animal *ob2 = new Cat;


    ob -> Load(0);
    ob -> Check();
    cout << "\n\n";
    ob1 -> Load(0);
    ob1 -> Check();
    cout << "\n\n";
    ob2 -> Load(0);
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

                       ob -> Delete();
                       ob -> Check();
                       ob -> Save();

                     break;

                   case 5 :

                       ob1 -> Delete();
                       ob1 -> Check();
                       ob1 -> Save();

                     break;

                   case 6 :

                       ob2 -> Delete();
                       ob2 -> Check();
                       ob2 -> Save();

                     break;

                   case 7 :

                       ob -> Edit();
                       ob -> Check();
                       ob -> Save();

                     break;

                   case 8 :

                       ob1 -> Edit();
                       ob1-> Check();
                       ob1 -> Save();

                     break;

                   case 9 :

                       ob2 -> Edit();
                       ob2 -> Check();
                       ob2 -> Save();

                     break;

                   case 10 :

                     ob -> Check();
                     ob1 -> Check();
                     ob2 -> Check();

                     break;



                   default :

                       ob -> Save();
                       ob1 -> Save();
                       ob2 -> Save();
                     return 0;

               }
       }
     while(choice);

	return 0;
}

