#include <iostream>




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

            cout << endl << endl << endl << "     МЕНЮ  : ";
            cout << endl << " 1. ДОБАВИТЬ РЫБУ   в  Базу ";
            cout << endl << " 2. ДОБАВИТЬ ПТИЦУ  в  Базу ";
            cout << endl << " 3. ДОБАВИТЬ КОШКУ  в  Базу " << endl;
            cout << endl << " 4. УДАЛИТЬ  РЫБУ   из Базы ";
            cout << endl << " 5. УДАЛИТЬ  ПТИЦУ  из Базы ";
            cout << endl << " 6. УДАЛИТЬ  КОШКУ  из Базы " << endl;
            cout << endl << " 7. ПОИСК по Базе Данных ";
            cout << endl << " 8. ВЫВОД Базы на Экран ";
            cout << endl << " 9. СОХРАНИТЬ ";
            cout << endl << " 0. ВЫХОД " << endl;

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

