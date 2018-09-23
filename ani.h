#include<cstdlib>
#include<iostream>
#include <cstring>

using namespace std;

 class Animal{

    protected :

 		char **Breed;
 		char **Colour;

	int size;

 	public :

	    virtual void Add() = 0;
	    virtual void Save() = 0;
	    //virtual void Delete() = 0;

	    virtual void Check() = 0;
	    virtual ~Animal(){};

 };

 class Fish : public Animal{

 	private :

 	    char **Food;

 	public :

		Fish();
		~Fish(){};

 	    void Add();
 	    void Check();
 	    void Save();

 };

 class Bird : public Animal{

 	private :

 		char Food[1000];
 		char Habitat[1000];

 	public :


 		Bird();
 		~Bird(){};
 	    void Add();
 	    void Check();
 	    void Save();
 };
/*
 class Cat : public Animal{
 	    void Add();
 };
 */
