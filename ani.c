#include "ani.h"

 // FISH

 Fish :: Fish(){

 	size = 0;
 }




 void Fish :: Add(){



    char Breed2[100];     char Colour2[100];     char Food2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_Food[1000];

    cout << endl << " ������� ������ ���� : ";        cin >> Breed2;
    cout << " ������� ���� ���� : ";                  cin >> Colour2;
    cout << " ������� ��� ������� ���� : ";           cin >> Food2;


    char **Breed_Ex = new char*[size];
         for(int i = 0 ; i < size ; i++){ Breed_Ex[i] = new char[tmp_Breed[i] + 1];  }
             for(int i = 0 ; i < size ; i++){ strcpy(Breed_Ex[i], Breed[i]);         }

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

     for(int i = 0 ; i < size ; i++){ delete []Breed_Ex[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour_Ex[i]; }
     for(int i = 0 ; i < size ; i++){ delete []Food_Ex[i];   }

 }





 void Fish :: Check(){

 	for(int i = 0 ; i < size ; i++){

 	   cout << endl << i+1 << ") ������ : " << Breed[i];
	   cout << endl << " ���� : " << Colour[i];
	   cout << endl << " ��� ������� : " << Food[i] << endl;
     }
 }



void Fish :: Save(){

   ofstream fpout("Fish.txt", ios_base::out);

   for(int i = 0 ; i < size ; i++){  fpout << Breed[i] ; fpout << endl;  fpout << Colour[i] << endl;  fpout << Food[i] << endl;  }

   fpout.close();
}

void Fish :: Load(){

    ifstream fpin("Fish.txt", ios_base::in);

    if (!fpin.is_open())
        cout << "���� �� ����� ���� ������!\n";

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
cout << endl << " tmp " << tmp2;
               if(tmp2 == 1) {  Breed[numb] = new char[ tmp_Read[i] + 1 ];  strcpy(Breed[numb],  Read); cout << endl << numb << ") " << Breed[numb]<<", "<< Read;  }
               if(tmp2 == 2) {  Colour[numb] = new char[ tmp_Read[i] + 1 ]; strcpy(Colour[numb], Read);cout << endl << numb << ") " << Colour[numb]<<", "<< Read;  }
               if(tmp2 == 3) {  Food[numb] = new char[ tmp_Read[i] + 1 ];   strcpy(Food[numb],   Read); cout << endl << numb << ") " << Food[numb]<<", "<< Read;   }

               tmp2++;
                 if(tmp2 == 4) { tmp2 = 1; numb++; }
        }

    fpin.close();
}

    // BIRD




 Bird :: Bird(){

 	size = 0;
 }

 void Bird :: Add(){


    cout << endl << " Print Bird`s Breed : ";  cin >> Breed[0];
    cout << endl << " Print Bird`s Colour : "; cin >> Colour[0];
    cout << endl << " Print Bird`s Food : ";   cin >> Food[0];
    cout << endl << " Print Bird`s Habitat : ";cin >> Habitat[0];

    size++;


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

 void Bird :: Save(){

 }


 void Bird :: Load(){

 }

