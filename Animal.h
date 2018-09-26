
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

        virtual void ShowMenu() = 0;

 };

  class Fish : public Animal{

 	private :

 	    char **Food;

 	public :

		Fish();
		~Fish();

 	    void Add();
 	    void Check();
 	    void Save();
 	    void Load();
 	    void ShowMenu();

 };
  class Bird : public Animal{

 	private :

 		char **Food;
 		char **Habitat;

 	public :


 		Bird();
 		~Bird();
 	    void Add();
 	    void Check();
 	    void Save();
 	    void Load();
 	    void ShowMenu(){};
 };





/*
 class Cat : public Animal{
 	    void Add();
 };
 */
