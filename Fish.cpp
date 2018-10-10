#include "Animal.h"
#include "ColourMenu.h"




 // FISH




 Fish :: Fish(){

 	size = 0;
 }


//--------------------------------------------------------------------------------------------------------------


 void Fish :: Add(){



    char Breed2[100];     char Colour2[100];     char Food2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_Food[1000];

    cout << endl << " > Введите Породу Рыбы : ";         for(int i = 0 ; i < 2 ; i++) gets(Breed2);
    cout << " > Введите Цвет Рыбы : ";                                                gets(Colour2);
    cout << " > Введите Тип Питания Рыбы : ";                                         gets(Food2);


    Load(1);

    tmp_Breed[size-1]  =  strlen(Breed2);
    tmp_Colour[size-1] =  strlen(Colour2);
    tmp_Food[size-1]   =  strlen(Food2);

       Breed[size-1] = new char[tmp_Breed[size-1] + 1];
                strcpy(Breed[size-1], Breed2);

       Colour[size-1] = new char[tmp_Colour[size-1] + 1];
                strcpy(Colour[size-1], Colour2);

       Food[size-1] = new char[tmp_Food[size-1] + 1];
                strcpy(Food[size-1], Food2);

 }


//--------------------------------------------------------------------------------------------------------------


 void Fish :: Delete(){

    ColourMenu ob;

    int tmp, tmp2 = 1;
    int Counter = 0;
    int Number;
    char Mass[100];
    int tmp_Read[1000];
    char Read[100];
    int numb = 0;

    cout << endl << "  > Введите ПОРОДУ для Удаления : ";
    for(int i = 0; i < 2 ; i++) gets(Mass);

    for(int i = 0 ; i < size ; i++){

        tmp = strcmp( Breed[i], Mass );

          if(tmp == 0){
          ob.Back_Yellow(); cout << endl << "  " << i+1 <<  "  |  " << Breed[i] <<  "  |  " << Colour[i] <<  "  |  " << Food[i] ;
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

               ifstream fpin("Fish.txt", ios_base::in);

                    if (!fpin.is_open())
                    cout << "Файл не может быть открыт!\n";


               for(int i = 0 ; i < size*3 ; i++){

                    fpin.getline(Read,100);

                    tmp_Read[i] = strlen(Read);
                }
               fpin.close();



               fpin.open("Fish.txt", ios_base::in);

               Breed = new char*[size];
               Colour = new char*[size];
               Food = new char*[size];

                  for(int i = 0 ; i < size*3 ; i++)
                  {

                    fpin.getline(Read,100);

                    if( i != Number*3 &&  i != (Number*3 + 1) &&  i != (Number*3 + 2)  ){

                      if(tmp2 == 1) {  Breed[numb] = new char[ tmp_Read[i] + 1 ];  strcpy(Breed[numb],  Read);   }
                      if(tmp2 == 2) {  Colour[numb] = new char[ tmp_Read[i] + 1 ]; strcpy(Colour[numb], Read);   }
                      if(tmp2 == 3) {  Food[numb] = new char[ tmp_Read[i] + 1 ];   strcpy(Food[numb],   Read);   }

                      tmp2++;
                      if(tmp2 == 4) { tmp2 = 1; numb++; }
                    }
                  }

               fpin.close();


    }

    size--;
    ob.Back_Normal();
 }


 //--------------------------------------------------------------------------------------------------------------


 void Fish :: Edit(){

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
          ob.Back_Yellow(); cout << endl << "  " << i+1 <<  "  |  " << Breed[i] <<  "  |  " << Colour[i] <<  "  |  " << Food[i] ;
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

    char Breed2[100];     char Colour2[100];     char Food2[100];
    int tmp_Breed[1000];  int tmp_Colour[1000];  int tmp_Food[1000];

    cout << endl << " > Введите Породу Рыбы : ";         for(int i = 0 ; i < 1 ; i++) gets(Breed2);
    cout << " > Введите Цвет Рыбы : ";                                                gets(Colour2);
    cout << " > Введите Тип Питания Рыбы : ";                                         gets(Food2);


    tmp_Breed[Number]  =  strlen(Breed2);
    tmp_Colour[Number] =  strlen(Colour2);
    tmp_Food[Number]   =  strlen(Food2);

       Breed[Number] = new char[tmp_Breed[Number] + 1];
                strcpy(Breed[Number], Breed2);

       Colour[Number] = new char[tmp_Colour[Number] + 1];
                strcpy(Colour[Number], Colour2);

       Food[Number] = new char[tmp_Food[Number] + 1];
                strcpy(Food[Number], Food2);
    }


 }


 //--------------------------------------------------------------------------------------------------------------



 void Fish :: Check(){

    ColourMenu ob;

    ob.Colour_Green();
    cout << endl << endl <<  "                                ТАБЛИЦА  РЫБЫ  " << endl << endl;

    ob.Colour_White_Int();

 	    cout << endl << " НОМЕР ||";
 	    cout << "                 ПОРОДА               ||";
 	    cout << "                          ЦВЕТ                        ||";
 	    cout << "           ТИП ПИТАНИЯ          ";

     cout << endl;


      for(int i = 0 ; i < size ; i++){


        ob.Back_White();      printf(" %3d\t",    i+1);
        ob.Back_Grey();       printf("\t%30s\t",  Breed[i]);
        ob.Back_Green();      printf("\t%40s\t",  Colour[i]);
        ob.Back_Lightblue();  printf("\t%20s\t",  Food[i]);
        ob.Back_Black();  cout << " ч " << endl;


        ob.Back_White();    cout << "--------";
 	    ob.Back_Grey();     cout << "----------------------------------------";
 	    ob.Back_Green();    cout << "--------------------------------------------------------";
        ob.Back_Lightblue();cout << "--------------------------------";
 	    ob.Back_Black();    cout << "ч" << endl;
      }
    ob.Back_Normal();
 }


//--------------------------------------------------------------------------------------------------------------


void Fish :: Save(){

   ofstream fpout("Fish.txt", ios_base::out);

   if (!fpout.is_open())
        cout << "Файл не может быть открыт!\n";

   for(int i = 0 ; i < size ; i++){  fpout << Breed[i] ; fpout << endl;  fpout << Colour[i] << endl;  fpout << Food[i] << endl;  }

   fpout.close();
}


//--------------------------------------------------------------------------------------------------------------


void Fish :: Load(int button){

    ifstream fpin("Fish.txt", ios_base::in);

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

    fpin.open("Fish.txt", ios_base::in);

    if(button == 0) size = File_size / 3;
    if(button == 1) size = (File_size / 3 ) + 1;

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




Fish :: ~Fish(){

     for(int i = 0 ; i < size ; i++){ delete []Breed[i];  }
     for(int i = 0 ; i < size ; i++){ delete []Colour[i]; }
     for(int i = 0 ; i < size ; i++){ delete []Food[i];   }

}


//--------------------------------------------------------------------------------------------------------------













