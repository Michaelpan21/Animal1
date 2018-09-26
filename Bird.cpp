#include "Animal.h"
  // BIRD





 Bird :: Bird(){

 	size = 0;
 }

 void Bird :: Add(){


    char Breed2[100];     char Colour2[100];     char Food2[100];     char Habitat2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_Food[1000];  int tmp_Habitat[1000];

    cout << endl << " Введите Породу Птицы : ";      for(int i = 0 ; i < 2 ; i++) gets(Breed2);
    cout << " Введите Окрас Птицы : ";                                            gets(Colour2);
    cout << " Введите Тип Питания Птицы : ";                                      gets(Food2);
    cout << " Введите Место Обитания Птицы : ";                                   gets(Habitat2);


    char **Breed_Ex = new char*[size];
    char **Colour_Ex = new char*[size];
    char **Food_Ex = new char*[size];
    char **Habitat_Ex = new char*[size];

      if(size > 0){

            for(int i = 0 ; i < size ; i++){ Breed_Ex[i] = new char[tmp_Breed[i] + 1];  }
                for(int i = 0 ; i < size ; i++){ strcpy(Breed_Ex[i], Breed[i]);         }


            for(int i = 0 ; i < size ; i++){ Colour_Ex[i] = new char[tmp_Colour[i] + 1]; }
                for(int i = 0 ; i < size ; i++){ strcpy(Colour_Ex[i], Colour[i]);        }


            for(int i = 0 ; i < size ; i++){ Food_Ex[i] = new char[tmp_Food[i] + 1];     }
                for(int i = 0 ; i < size ; i++){ strcpy(Food_Ex[i], Food[i]);            }


            for(int i = 0 ; i < size ; i++){ Habitat_Ex[i] = new char[tmp_Habitat[i] + 1];     }
                for(int i = 0 ; i < size ; i++){ strcpy(Habitat_Ex[i], Habitat[i]);            }
          }

    size++;

    tmp_Breed[size-1] = strlen(Breed2);
    tmp_Colour[size-1] = strlen(Colour2);
    tmp_Food[size-1] = strlen(Food2);
    tmp_Food[size-1] = strlen(Habitat2);



      Breed = new char*[size];
         for(int i = 0 ; i < size ; i++){ Breed[i] = new char[tmp_Breed[size-1] + 1];   }
             for(int i = 0 ; i < size - 1 ; i++){ strcpy(Breed[i], Breed_Ex[i]);       }
                strcpy(Breed[size-1], Breed2);


      Colour = new char*[size];
         for(int i = 0 ; i < size ; i++){ Colour[i] = new char[tmp_Colour[size-1] + 1]; }
             for(int i = 0 ; i < size - 1 ; i++){ strcpy(Colour[i], Colour_Ex[i]);     }
                strcpy(Colour[size-1], Colour2);


      Food = new char*[size];
         for(int i = 0 ; i < size ; i++){ Food[i] = new char[tmp_Food[size-1] + 1];     }
             for(int i = 0 ; i < size - 1 ; i++){ strcpy(Food[i], Food_Ex[i]);         }
                strcpy(Food[size-1], Food2);

      Habitat = new char*[size];
         for(int i = 0 ; i < size ; i++){ Habitat[i] = new char[tmp_Habitat[size-1] + 1];    }
             for(int i = 0 ; i < size - 1; i++){ strcpy(Habitat[i], Habitat_Ex[i]);     }
                strcpy(Habitat[size-1], Habitat2);

     for(int i = 0 ; i < size ; i++){ delete []Breed_Ex[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour_Ex[i]; }
     for(int i = 0 ; i < size ; i++){ delete []Food_Ex[i];   }
     for(int i = 0 ; i < size ; i++){ delete []Habitat_Ex[i];}
 }


//--------------------------------------------------------------------------------------------------------------


 void Bird :: Check(){

 	for(int i = 0 ; i < size ; i++){

 	   cout << endl << i+1 << ") Порода : " << Breed[i];
	   cout << endl << " Цвет : " << Colour[i];
	   cout << endl << " Тип Питания : " << Food[i];
	   cout << endl << " Место Обитания : " << Habitat[i] << endl;

     }
 }


//--------------------------------------------------------------------------------------------------------------


 void Bird :: Save(){

   ofstream fpout("Bird.txt", ios_base::out);

   if (!fpout.is_open())
        cout << "Файл не может быть открыт!\n";

   for(int i = 0 ; i < size ; i++){  fpout << Breed[i] ; fpout << endl;  fpout << Colour[i] << endl;  fpout << Food[i] << endl; fpout << Habitat[i] << endl;}

   fpout.close();

 }


//--------------------------------------------------------------------------------------------------------------


 void Bird :: Load(){


    ifstream fpin("Bird.txt", ios_base::in);

    if (!fpin.is_open())
        cout << "Файл не может быть открыт!\n";

    char Read[100];
    int File_size = 0, tmp, tmp2 = 1 , numb = 0;
    int tmp_Read[1000];


    for(int i = 0 ; i < 100 ; i++){

        fpin.getline(Read,100);

        tmp = strlen(Read);
            if(tmp == 0) break;

        tmp_Read[i] = strlen(Read);

        File_size++;
    }


    fpin.close();

    fpin.open("Bird.txt", ios_base::in);

    size = File_size / 4;

    Breed = new char*[size];
    Colour = new char*[size];
    Food = new char*[size];
    Habitat = new char*[size];

        for(int i = 0 ; i < File_size ; i++)
            {

               fpin.getline(Read,100);

               if(tmp2 == 1) {  Breed[numb] = new char[ tmp_Read[i] + 1 ];   strcpy(Breed[numb],   Read);   }
               if(tmp2 == 2) {  Colour[numb] = new char[ tmp_Read[i] + 1 ];  strcpy(Colour[numb],  Read);   }
               if(tmp2 == 3) {  Food[numb] = new char[ tmp_Read[i] + 1 ];    strcpy(Food[numb],    Read);   }
               if(tmp2 == 4) {  Habitat[numb] = new char[ tmp_Read[i] + 1 ]; strcpy(Habitat[numb], Read);   }

               tmp2++;
                 if(tmp2 == 5) { tmp2 = 1; numb++; }
        }

    fpin.close();

 }


//--------------------------------------------------------------------------------------------------------------


Bird :: ~Bird(){

     for(int i = 0 ; i < size ; i++){ delete []Breed[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour[i]; }
     for(int i = 0 ; i < size ; i++){ delete []Food[i];   }
     for(int i = 0 ; i < size ; i++){ delete []Habitat[i];   }

}



