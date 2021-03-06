
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

            cout << endl << endl << endl << "     ���� : " << endl;       //MENU
            cout << endl << " 1. �������� ����   � ���� ";                //ADD FISH
            cout << endl << " 2. �������� �����  �  ���� ";               //ADD BIRD
            cout << endl << " 3. �������� �����  �  ���� " << endl;       //ADD CAT
            cout << endl << " 4. �������  ����   �� ���� ";               //DELETE FISH
            cout << endl << " 5. �������  �����  �� ���� ";               //DELETE FISH
            cout << endl << " 6. �������  �����  �� ���� " << endl;       //DELETE FISH
            cout << endl << " 7. �������������  ����   �� ���� ";         //EDIT FISH
            cout << endl << " 8. �������������  �����  �� ���� ";         //EDIT FISH
            cout << endl << " 9. �������������  �����  �� ���� " << endl; //EDIT FISH
            cout << endl << " 10. ����� ���� ������ �� ����� ";           //SHOW DATABASE
            cout << endl << " 11. ��������� ������ ";                     //CONSOLE
            cout << endl << " 12. ����� �� ���� ������ ";                 //FIND IN DATABASE
            cout << endl << " 13. ��������� ";                            //SAVE
            cout << endl << " 0. ����� " << endl;                         //EXIT
   }
};
