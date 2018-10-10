
#include<iostream>
#include<fstream>
#include <cstring>
#include<locale.h>
#include<windows.h>
#define setlocale (LC_ALL,"Russian")


using namespace std;





 class Animal{

    protected :

 		char **Breed;
 		char **Colour;

	int size;

 	public :

	    virtual void Add() = 0;
	    virtual void Save() = 0;
	    virtual void Load(int) = 0;
	    virtual void Delete() = 0;
	    virtual void Edit() = 0;

	    virtual void Check() = 0;
	    virtual ~Animal(){};

 };



  class Fish : public Animal{

 	protected :

 	    char **Food;

 	public :

		Fish();
		~Fish();

 	    void Add();
 	    void Delete();
 	    void Edit();
 	    void Check();
 	    void Save();
 	    void Load(int button);

 };



  class Bird : public Animal{

 	protected :

 		char **Food;
 		char **Habitat;

 	public :


 		Bird();
 		~Bird();
 	    void Add();
 	    void Delete();
 	    void Edit();
 	    void Check();
 	    void Save();
 	    void Load(int button);
 };



 class Cat : public Animal{

 	protected :

 		char **FIO;
 		char **Nickname;

 	public :


 		Cat();
 		~Cat();
 	    void Add();
 	    void Delete();
 	    void Edit();
 	    void Check();
 	    void Save();
 	    void Load(int button);
 };


class Menu{

public:

   void ShowMenu(){

            cout << endl << endl << endl << "     ÌÅÍÞ : " << endl;       //MENU
            cout << endl << " 1. ÄÎÁÀÂÈÒÜ ÐÛÁÓ   â Áàçó ";                //ADD FISH
            cout << endl << " 2. ÄÎÁÀÂÈÒÜ ÏÒÈÖÓ  â  Áàçó ";               //ADD BIRD
            cout << endl << " 3. ÄÎÁÀÂÈÒÜ ÊÎØÊÓ  â  Áàçó " << endl;       //ADD CAT
            cout << endl << " 4. ÓÄÀËÈÒÜ  ÐÛÁÓ   èç Áàçû ";               //DELETE FISH
            cout << endl << " 5. ÓÄÀËÈÒÜ  ÏÒÈÖÓ  èç Áàçû ";               //DELETE FISH
            cout << endl << " 6. ÓÄÀËÈÒÜ  ÊÎØÊÓ  èç Áàçû " << endl;       //DELETE FISH
            cout << endl << " 7. ÐÅÄÀÊÒÈÐÎÂÀÒÜ  ÐÛÁÓ   èç Áàçû ";         //EDIT FISH
            cout << endl << " 8. ÐÅÄÀÊÒÈÐÎÂÀÒÜ  ÏÒÈÖÓ  èç Áàçû ";         //EDIT FISH
            cout << endl << " 9. ÐÅÄÀÊÒÈÐÎÂÀÒÜ  ÊÎØÊÓ  èç Áàçû " << endl; //EDIT FISH
            cout << endl << " 10. ÂÛÂÎÄ ÁÀÇÓ ÄÀÍÍÛÕ ÍÀ ÝÊÐÀÍ ";           //SHOW DATABASE
            cout << endl << " 11. ÊÎÌÀÍÄÍÀß ÑÒÐÎÊÀ ";                     //CONSOLE
            cout << endl << " 12. ÏÎÈÑÊ ÏÎ ÁÀÇÅ ÄÀÍÍÛÕ ";                 //FIND IN DATABASE
            cout << endl << " 13. ÑÎÕÐÀÍÈÒÜ ";                            //SAVE
            cout << endl << " 0. ÂÛÕÎÄ " << endl;                         //EXIT
   }
};
