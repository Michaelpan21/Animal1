#include "ani.h"

 // FISH

 Fish :: Fish(){

 	size = 0;
 }




 void Fish :: Add(){



    char Breed2[100];     char Colour2[100];     char Food2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_Food[1000];

    cout << endl << " Print Fish`s Breed : ";  cin >> Breed2;
    cout << " Print Fish`s Colour : ";         cin >> Colour2;
    cout << " Print Fish`s Food : ";           cin >> Food2;


    char **Breed_Ex = new char*[size];
         for(int i = 0 ; i < size ; i++){ Breed_Ex[i] = new char[tmp_Breed[i] + 1];  }
             for(int i = 0 ; i < size ; i++){ strcpy(Breed_Ex[i], Breed[i]);      }

    char **Colour_Ex = new char*[size];
        for(int i = 0 ; i < size ; i++){ Colour_Ex[i] = new char[tmp_Colour[i] + 1]; }
             for(int i = 0 ; i < size ; i++){ strcpy(Colour_Ex[i], Colour[i]);       }

    char **Food_Ex = new char*[size];
        for(int i = 0 ; i < size ; i++){ Food_Ex[i] = new char[tmp_Food[i] + 1];     }
             for(int i = 0 ; i < size ; i++){ strcpy(Food_Ex[i], Food[i]);           }


    size++;


    tmp_Breed[size-1] = strlen(Breed2);
    tmp_Colour[size-1] = strlen(Colour2);
    tmp_Food[size-1] = strlen(Food2);



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

 }





 void Fish :: Check(){

 	cout << "size = " << size;


 	for(int i = 0 ; i < size ; i++){

 	   cout << endl << i+1 << ") Breed : " << Breed[i];
	   cout << endl << " Colour : " << Colour[i];
	   cout << endl << " Food : " << Food[i] << endl;
     }
 }



void Fish :: Save(){

}



 // BIRD

 Bird :: Bird(){

 	size = 0;
 }

 void Bird :: Add(){

    cout << "size = " << size;

    cout << endl << " Print Bird`s Breed : ";  cin >> Breed[0];
    cout << endl << " Print Bird`s Colour : "; cin >> Colour[0];
    cout << endl << " Print Bird`s Food : ";   cin >> Food[0];
    cout << endl << " Print Bird`s Habitat : ";cin >> Habitat[0];

    size++;


   cout << "size = " << size;
 }

 void Bird :: Check(){

 	cout << "size = " << size;


 	for(int i = 0 ; i < size ; i++){

 	   cout << endl << i+1 << ") Breed : " << Breed[0];
	   cout << endl << " Colour : " << Colour[0];
	   cout << endl << " Food : " << Food[0];
	   cout << endl << " Habitat : " << Colour[0] << endl;
     }
 }


