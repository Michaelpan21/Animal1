
#include<iostream>
#include<fstream>
#include <cstring>
#include<locale.h>
#include<windows.h>

using namespace std;



 class Animal{

    protected :

 		char **Breed;
 		char **Colour;

	int size;

 	public :

	    virtual void Add() = 0;
	    virtual void Save() = 0;
	    virtual void Load() = 0;
	    //virtual void Delete() = 0;

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
 	    void Check();
 	    void Save();
 	    void Load();

 };



  class Bird : public Animal{

 	protected :

 		char **Food;
 		char **Habitat;

 	public :


 		Bird();
 		~Bird();
 	    void Add();
 	    void Check();
 	    void Save();
 	    void Load();
 };



 class Cat : public Animal{

 	protected :

 		char **FIO;
 		char **Nickname;

 	public :


 		Cat();
 		~Cat();
 	    void Add();
 	    void Check();
 	    void Save();
 	    void Load();
 };



 class Menu{

 public :

     void ShowMenu();
     void Colour_Green();
     void Colour_Green_Light();
     void Colour_Blue();
     void Colour_Blue_Light();
     void Colour_Red();
     void Colour_Red_Ligth();
     void Colour_White();
     void Colour_White_Int();
     void Colour_Grey();
     void Colour_Yellow();
     void Colour_Yellow_Ligth();
     void Colour_Purple();
     void Colour_Red_Light();

     void Back_Grey();
     void Back_Yellow();
     void Back_Purple();
     void Back_Lightblue();
     void Back_Green();
     void Back_Black();
     void Back_White();


 };
