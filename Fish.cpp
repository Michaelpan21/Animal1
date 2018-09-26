#include "Animal.h"




 // FISH




 Fish :: Fish(){

 	size = 0;
 }


//--------------------------------------------------------------------------------------------------------------


 void Fish :: Add(){



    char Breed2[100];     char Colour2[100];     char Food2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_Food[1000];

    cout << endl << " Ââåäèòå Ïîðîäó Ðûáû : ";         for(int i = 0 ; i < 2 ; i++) gets(Breed2);
    cout << " Ââåäèòå Öâåò Ðûáû : ";                                                gets(Colour2);
    cout << " Ââåäèòå Òèï Ïèòàíèÿ Ðûáû : ";                                         gets(Food2);

    char **Breed_Ex = new char*[size];
    char **Colour_Ex = new char*[size];
    char **Food_Ex = new char*[size];

      if(size > 0){

            for(int i = 0 ; i < size ; i++){ Breed_Ex[i] = new char[tmp_Breed[i] + 1];  }
                for(int i = 0 ; i < size ; i++){ strcpy(Breed_Ex[i], Breed[i]);         }


            for(int i = 0 ; i < size ; i++){ Colour_Ex[i] = new char[tmp_Colour[i] + 1]; }
                for(int i = 0 ; i < size ; i++){ strcpy(Colour_Ex[i], Colour[i]);        }


            for(int i = 0 ; i < size ; i++){ Food_Ex[i] = new char[tmp_Food[i] + 1];     }
                for(int i = 0 ; i < size ; i++){ strcpy(Food_Ex[i], Food[i]);            }

          }


    size++;


    tmp_Breed[size-1]  =  strlen(Breed2);
    tmp_Colour[size-1] =  strlen(Colour2);
    tmp_Food[size-1]   =  strlen(Food2);



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


     for(int i = 0 ; i < size ; i++){ delete []Breed_Ex[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour_Ex[i]; }
     for(int i = 0 ; i < size ; i++){ delete []Food_Ex[i];   }

 }


//--------------------------------------------------------------------------------------------------------------


 void Fish :: Check(){

 	for(int i = 0 ; i < size ; i++){

 	   cout << endl << i+1 << ") Ïîðîäà : " << Breed[i];
	   cout << endl << " Öâåò : " << Colour[i];
	   cout << endl << " Òèï Ïèòàíèÿ : " << Food[i] << endl;
     }
 }


//--------------------------------------------------------------------------------------------------------------


void Fish :: Save(){

   ofstream fpout("Fish.txt", ios_base::out);

   if (!fpout.is_open())
        cout << "Ôàéë íå ìîæåò áûòü îòêðûò!\n";

   for(int i = 0 ; i < size ; i++){  fpout << Breed[i] ; fpout << endl;  fpout << Colour[i] << endl;  fpout << Food[i] << endl;  }

   fpout.close();
}


//--------------------------------------------------------------------------------------------------------------


void Fish :: Load(){

    ifstream fpin("Fish.txt", ios_base::in);

    if (!fpin.is_open())
        cout << "Ôàéë íå ìîæåò áûòü îòêðûò!\n";

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

    fpin.open("Fish.txt", ios_base::in);

    size = File_size / 3;

    Breed = new char*[size];
    Colour = new char*[size];
    Food = new char*[size];

        for(int i = 0 ; i < File_size ; i++)
            {

               fpin.getline(Read,100);

               if(tmp2 == 1) {  Breed[numb] = new char[ tmp_Read[i] + 1 ];  strcpy(Breed[numb],  Read);   }
               if(tmp2 == 2) {  Colour[numb] = new char[ tmp_Read[i] + 1 ]; strcpy(Colour[numb], Read);   }
               if(tmp2 == 3) {  Food[numb] = new char[ tmp_Read[i] + 1 ];   strcpy(Food[numb],   Read);   }

               tmp2++;
                 if(tmp2 == 4) { tmp2 = 1; numb++; }
        }

    fpin.close();
}


//--------------------------------------------------------------------------------------------------------------


void Fish :: ShowMenu(){
            cout << endl << endl << endl << "     ÌÅÍÞ : ";
            cout << endl << " 1. ÄÎÁÀÂÈÒÜ ÐÛÁÓ   â  Áàçó ";
            cout << endl << " 2. ÄÎÁÀÂÈÒÜ ÏÒÈÖÓ  â  Áàçó ";
            cout << endl << " 3. ÄÎÁÀÂÈÒÜ ÊÎØÊÓ  â  Áàçó " << endl;
            cout << endl << " 4. ÓÄÀËÈÒÜ  ÐÛÁÓ   èç Áàçû ";
            cout << endl << " 5. ÓÄÀËÈÒÜ  ÏÒÈÖÓ  èç Áàçû ";
            cout << endl << " 6. ÓÄÀËÈÒÜ  ÊÎØÊÓ  èç Áàçû " << endl;
            cout << endl << " 7. ÏÎÈÑÊ ïî Áàçå Äàííûõ ";
            cout << endl << " 8. ÂÛÂÎÄ Áàçû íà Ýêðàí ";
            cout << endl << " 9. ÑÎÕÐÀÍÈÒÜ ";
            cout << endl << " 0. ÂÛÕÎÄ " << endl;
}



//--------------------------------------------------------------------------------------------------------------



Fish :: ~Fish(){

     for(int i = 0 ; i < size ; i++){ delete []Breed[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour[i]; }
     for(int i = 0 ; i < size ; i++){ delete []Food[i];   }

}


//--------------------------------------------------------------------------------------------------------------













