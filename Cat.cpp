#include "Animal.h"




  // BIRD





 Cat :: Cat(){

 	size = 0;
 }

 void Cat :: Add(){


    char Breed2[100];     char Colour2[100];     char FIO2[100];     char Nickname2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_FIO[1000];  int tmp_Nickname[1000];

    cout << endl << "  > Введите Породу Кошки : ";      for(int i = 0 ; i < 2 ; i++) gets(Breed2);
    cout << "  > Введите Окрас Кошки : ";                                            gets(Colour2);
    cout << "  > Введите ФИО Владельца Кошки : ";                                    gets(FIO2);
    cout << "  > Введите Кличку Кошки : ";                                           gets(Nickname2);


    char **Breed_Ex = new char*[size];
    char **Colour_Ex = new char*[size];
    char **FIO_Ex = new char*[size];
    char **Nickname_Ex = new char*[size];

      if(size > 0){

            for(int i = 0 ; i < size ; i++){ Breed_Ex[i] = new char[tmp_Breed[i] + 1];  }
                for(int i = 0 ; i < size ; i++){ strcpy(Breed_Ex[i], Breed[i]);         }


            for(int i = 0 ; i < size ; i++){ Colour_Ex[i] = new char[tmp_Colour[i] + 1]; }
                for(int i = 0 ; i < size ; i++){ strcpy(Colour_Ex[i], Colour[i]);        }


            for(int i = 0 ; i < size ; i++){ FIO_Ex[i] = new char[tmp_FIO[i] + 1];     }
                for(int i = 0 ; i < size ; i++){ strcpy(FIO_Ex[i], FIO[i]);            }


            for(int i = 0 ; i < size ; i++){ Nickname_Ex[i] = new char[tmp_Nickname[i] + 1];     }
                for(int i = 0 ; i < size ; i++){ strcpy(Nickname_Ex[i], Nickname[i]);            }
          }

    size++;

    tmp_Breed[size-1] = strlen(Breed2);
    tmp_Colour[size-1] = strlen(Colour2);
    tmp_FIO[size-1] = strlen(FIO2);
    tmp_Nickname[size-1] = strlen(Nickname2);



      Breed = new char*[size];
         for(int i = 0 ; i < size ; i++){ Breed[i] = new char[tmp_Breed[size-1] + 1];   }
             for(int i = 0 ; i < size - 1 ; i++){ strcpy(Breed[i], Breed_Ex[i]);       }
                strcpy(Breed[size-1], Breed2);


      Colour = new char*[size];
         for(int i = 0 ; i < size ; i++){ Colour[i] = new char[tmp_Colour[size-1] + 1]; }
             for(int i = 0 ; i < size - 1 ; i++){ strcpy(Colour[i], Colour_Ex[i]);     }
                strcpy(Colour[size-1], Colour2);


      FIO = new char*[size];
         for(int i = 0 ; i < size ; i++){ FIO[i] = new char[tmp_FIO[size-1] + 1];     }
             for(int i = 0 ; i < size - 1 ; i++){ strcpy(FIO[i], FIO_Ex[i]);         }
                strcpy(FIO[size-1], FIO2);

      Nickname = new char*[size];
         for(int i = 0 ; i < size ; i++){ Nickname[i] = new char[tmp_Nickname[size-1] + 1];    }
             for(int i = 0 ; i < size - 1; i++){ strcpy(Nickname[i], Nickname_Ex[i]);     }
                strcpy(Nickname[size-1], Nickname2);

     for(int i = 0 ; i < size ; i++){ delete []Breed_Ex[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour_Ex[i]; }
     for(int i = 0 ; i < size ; i++){ delete []FIO_Ex[i];   }
     for(int i = 0 ; i < size ; i++){ delete []Nickname_Ex[i];}
 }


//--------------------------------------------------------------------------------------------------------------


 void Cat :: Check(){

    Menu ob;

    ob.Colour_Red();
    cout << endl << endl <<  "                                ТАБЛИЦА  КОШКИ " << endl << endl;

    ob.Colour_White_Int();

 	    cout << endl << " НОМЕР ||";
 	    cout << "                ПОРОДА                ||";
 	    cout << "                          ЦВЕТ                        ||";
 	    cout << "                       ФИО ВЛАДЕЛЬЦА                  ||";
 	    cout << "             КЛИЧКА            ";

     cout << endl;

      for(int i = 0 ; i < size ; i++){


        ob.Back_White(); printf(" %3d\t", i+1);
        ob.Back_Grey(); printf("\t%30s\t", Breed[i]);
        ob.Back_Green(); printf("\t%40s\t",  Colour[i]);
        ob.Back_Lightblue(); printf("\t%40s\t",  FIO[i]);
        ob.Back_Yellow(); printf("\t%25s\t", Nickname[i]);
        ob.Back_Black();  cout << " ч " << endl;


        ob.Back_White();    cout << "--------";
 	    ob.Back_Grey();     cout << "----------------------------------------";
 	    ob.Back_Green();    cout << "--------------------------------------------------------";
        ob.Back_Lightblue();cout << "--------------------------------------------------------";
 	    ob.Back_Yellow();   cout << "----------------------------------------";
 	    ob.Back_Black();    cout << "    черный текст на черном фоне      " << endl;
      }

 }


//--------------------------------------------------------------------------------------------------------------


 void Cat :: Save(){

   ofstream fpout("Cat.txt", ios_base::out);

   if (!fpout.is_open())
        cout << "Файл не может быть открыт!\n";

   for(int i = 0 ; i < size ; i++){
            fpout << Breed[i] ;fpout << endl;
            fpout << Colour[i]       << endl;
            fpout << FIO[i]          << endl;
            fpout << Nickname[i]     << endl;
            }

   fpout.close();

 }


//--------------------------------------------------------------------------------------------------------------


 void Cat :: Load(){


    ifstream fpin("Cat.txt", ios_base::in);

    if (!fpin.is_open())
        cout << "Файл не может быть открыт!\n";

    char Read[100];
    int File_size = 0;
    int tmp;
    int tmp2 = 1;
    int numb = 0;
    int tmp_Read[1000];


    for(int i = 0 ; i < 100 ; i++){

        fpin.getline(Read,100);

        tmp = strlen(Read);
            if(tmp == 0) break;

        tmp_Read[i] = strlen(Read);

        File_size++;
    }


    fpin.close();

    fpin.open("Cat.txt", ios_base::in);

    size = File_size / 4;

    Breed    = new char*[size];
    Colour   = new char*[size];
    FIO      = new char*[size];
    Nickname = new char*[size];

        for(int i = 0 ; i < File_size ; i++)
            {

               fpin.getline(Read,100);

               if(tmp2 == 1) {  Breed[numb] = new char[ tmp_Read[i] + 1 ];    strcpy(Breed[numb],    Read);   }
               if(tmp2 == 2) {  Colour[numb] = new char[ tmp_Read[i] + 1 ];   strcpy(Colour[numb],   Read);   }
               if(tmp2 == 3) {  FIO[numb] = new char[ tmp_Read[i] + 1 ];      strcpy(FIO[numb],      Read);   }
               if(tmp2 == 4) {  Nickname[numb] = new char[ tmp_Read[i] + 1 ]; strcpy(Nickname[numb], Read);   }

               tmp2++;
                 if(tmp2 == 5) { tmp2 = 1; numb++; }
        }

    fpin.close();

 }


//--------------------------------------------------------------------------------------------------------------


Cat :: ~Cat(){

     for(int i = 0 ; i < size ; i++){ delete []Breed[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour[i]; }
     for(int i = 0 ; i < size ; i++){ delete []FIO[i];   }
     for(int i = 0 ; i < size ; i++){ delete []Nickname[i];   }

}
