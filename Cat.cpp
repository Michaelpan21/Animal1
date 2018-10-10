#include "Animal.h"
#include "ColourMenu.h"



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

    Load(1);

    tmp_Breed[size-1] = strlen(Breed2);
    tmp_Colour[size-1] = strlen(Colour2);
    tmp_FIO[size-1] = strlen(FIO2);
    tmp_Nickname[size-1] = strlen(Nickname2);



          Breed[size-1] = new char[tmp_Breed[size-1] + 1];
                strcpy(Breed[size-1], Breed2);


          Colour[size-1] = new char[tmp_Colour[size-1] + 1];
                strcpy(Colour[size-1], Colour2);

          FIO[size-1] = new char[tmp_FIO[size-1] + 1];
                strcpy(FIO[size-1], FIO2);

          Nickname[size-1] = new char[tmp_Nickname[size-1] + 1];
                strcpy(Nickname[size-1], Nickname2);

 }



 //--------------------------------------------------------------------------------------------------------------


 void Cat :: Edit(){

    ColourMenu ob;

    int tmp;
    int Counter = 0;
    int Number;
    char Mass[100];


    cout << endl << "  > Введите ПОРОДУ для Редактирования : ";
    for(int i = 0; i < 2 ; i++) gets(Mass);

    for(int i = 0 ; i < size ; i++){

        tmp = strcmp( Breed[i], Mass );

          if(tmp == 0){
          ob.Back_Yellow(); cout << endl << "  " << i+1 <<  "  |  " << Breed[i] <<  "  |  " << Colour[i] <<  "  |  " << FIO[i] <<  "  |  " << Nickname[i]  ;
          Number = i;
          Counter++;
          }
    }

    ob.Back_Normal();

    if(Counter > 1){

        cout << endl << " > Найдено Несколько Элементов ! Введите НОМЕР для Редактирования : ";
        cin >> Number;
    }

    if(Counter > 0){

    cout << endl;


    char Breed2[100];     char Colour2[100];     char FIO2[100];     char Nickname2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_FIO[1000];  int tmp_Nickname[1000];

    cout << endl << "  > Введите Породу Кошки : ";      for(int i = 0 ; i < 2 ; i++) gets(Breed2);
    cout << "  > Введите Окрас Кошки : ";                                            gets(Colour2);
    cout << "  > Введите ФИО Владельца Кошки : ";                                    gets(FIO2);
    cout << "  > Введите Кличку Кошки : ";                                           gets(Nickname2);

    tmp_Breed[Number] = strlen(Breed2);
    tmp_Colour[Number] = strlen(Colour2);
    tmp_FIO[Number] = strlen(FIO2);
    tmp_Nickname[Number] = strlen(Nickname2);


          Breed[Number] = new char[tmp_Breed[Number] + 1];
                strcpy(Breed[Number], Breed2);


          Colour[Number] = new char[tmp_Colour[Number] + 1];
                strcpy(Colour[Number], Colour2);

          FIO[Number] = new char[tmp_FIO[Number] + 1];
                strcpy(FIO[Number], FIO2);

          Nickname[Number] = new char[tmp_Nickname[Number] + 1];
                strcpy(Nickname[Number], Nickname2);
    }


 }


//--------------------------------------------------------------------------------------------------------------


 void Cat :: Delete(){

    ColourMenu ob;

    int tmp, tmp2 = 1;
    int Counter = 0;
    int Number;
    char Mass[100];
    int tmp_Read[1000];
    char Read[100];
    int numb = 0;

    cout << "  > Введите НОМЕР ПОЗИЦИИ или ПОРОДУ для Удаления : ";
    for(int i = 0; i < 2 ; i++) gets(Mass);

    for(int i = 0 ; i < size ; i++){

        tmp = strcmp( Breed[i], Mass );

          if(tmp == 0){
          ob.Back_Yellow(); cout << endl << "  " << i+1 <<  "  |  " << Breed[i] <<  "  |  " << Colour[i] <<  "  |  " << FIO[i] <<  "  |  " << Nickname[i];
          Number = i;
          Counter++;
          }
    }

    ob.Back_Normal();

    if(Counter > 1){

        cout << endl << " > Найдено Несколько Элементов ! Введите НОМЕР для УДАЛЕНИЯ : ";
        cin >> Number;
    }

    if(Counter > 0){

               ifstream fpin("Cat.txt", ios_base::in);

                    if (!fpin.is_open())
                    cout << "Файл не может быть открыт!\n";


               for(int i = 0 ; i < size*4 ; i++){

                    fpin.getline(Read,100);

                    tmp_Read[i] = strlen(Read);
                }
               fpin.close();



               fpin.open("Cat.txt", ios_base::in);

               Breed = new char*[size];
               Colour = new char*[size];
               FIO = new char*[size];
               Nickname = new char*[size];

                  for(int i = 0 ; i < size*4 ; i++)
                  {

                    fpin.getline(Read,100);

                    if( i != Number*4 &&  i != (Number*4 + 1) &&  i != (Number*4 + 2)  ){

                      if(tmp2 == 1) {  Breed[numb] = new char[ tmp_Read[i] + 1 ];      strcpy(Breed[numb],     Read);   }
                      if(tmp2 == 2) {  Colour[numb] = new char[ tmp_Read[i] + 1 ];     strcpy(Colour[numb],    Read);   }
                      if(tmp2 == 3) {  FIO[numb] = new char[ tmp_Read[i] + 1 ];        strcpy(FIO[numb],      Read);   }
                      if(tmp2 == 3) {  Nickname[numb] = new char[ tmp_Read[i] + 1 ];   strcpy(Nickname[numb],   Read);   }

                      tmp2++;
                      if(tmp2 == 5) { tmp2 = 1; numb++; }
                    }
                  }

               fpin.close();


    }

    size--;
    ob.Back_Normal();
 }


//--------------------------------------------------------------------------------------------------------------


 void Cat :: Check(){

    ColourMenu ob;

    ob.Colour_Red();
    cout << endl << endl <<  "                                ТАБЛИЦА  КОШКИ " << endl << endl;

    ob.Colour_White_Int();

 	    cout << endl << " НОМЕР ||";
 	    cout << "                ПОРОДА                ||";
 	    cout << "                      ЦВЕТ                    ||";
 	    cout << "                 ФИО ВЛАДЕЛЬЦА                ||";
 	    cout << "             КЛИЧКА            ";

     cout << endl;

      for(int i = 0 ; i < size ; i++){


        ob.Back_White(); printf(" %3d\t", i+1);
        ob.Back_Grey(); printf("\t%30s\t", Breed[i]);
        ob.Back_Green(); printf("\t%35s\t",  Colour[i]);
        ob.Back_Lightblue(); printf("\t%35s\t",  FIO[i]);
        ob.Back_Yellow(); printf("\t%25s\t", Nickname[i]);
        ob.Back_Black();  cout << " ч " << endl;


        ob.Back_White();    cout << "--------";
 	    ob.Back_Grey();     cout << "----------------------------------------";
 	    ob.Back_Green();    cout << "------------------------------------------------";
        ob.Back_Lightblue();cout << "------------------------------------------------";
 	    ob.Back_Yellow();   cout << "----------------------------------------";
 	    ob.Back_Black();    cout << " ч" << endl;
       }
        ob.Back_Normal();
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


 void Cat :: Load(int button){


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

    if(button == 0) size = File_size / 4;
    if(button == 1) size = (File_size / 4) + 1;

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
