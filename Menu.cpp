#include "Animal.h"

 void Menu :: ShowMenu(){

            cout << endl << endl << endl << "     ���� : " << endl;
            cout << endl << " 1. �������� ����   � ���� ";
            cout << endl << " 2. �������� �����  �  ���� ";
            cout << endl << " 3. �������� �����  �  ���� " << endl;
            cout << endl << " 4. �������  ����   �� ���� ";
            cout << endl << " 5. �������  �����  �� ���� ";
            cout << endl << " 6. �������  �����  �� ���� " << endl;
            cout << endl << " 7. �������������  ����   �� ���� ";
            cout << endl << " 8. �������������  �����  �� ���� ";
            cout << endl << " 9. �������������  �����  �� ���� " << endl;
            cout << endl << " 10. ����� �� ���� ������ ";
            cout << endl << " 11. ����� ���� �� ����� ";
            cout << endl << " 12. ��������� ";
            cout << endl << " 0. ����� " << endl;

}



  void Menu :: Colour_Green(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(2) | FOREGROUND_INTENSITY);
  }

  void Menu :: Colour_Green_Light(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(10) | FOREGROUND_INTENSITY);
  }


  void Menu :: Colour_Blue(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(1) | FOREGROUND_INTENSITY);
  }

  void Menu :: Colour_Blue_Light(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(11) | FOREGROUND_INTENSITY);
  }

  void Menu :: Colour_Red(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(4) | FOREGROUND_INTENSITY);
  }

  void Menu :: Colour_Red_Light(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(12) | FOREGROUND_INTENSITY);
  }

  void Menu :: Colour_White(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(7) );
  }

  void Menu :: Colour_White_Int(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(15) );
  }

  void Menu :: Colour_Grey(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(8) | FOREGROUND_INTENSITY );
  }

  void Menu :: Colour_Purple(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(5) | FOREGROUND_INTENSITY);
  }

  void Menu :: Colour_Yellow(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(6) );
  }

  void Menu :: Colour_Yellow_Ligth(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(13) );
  }





  void Menu :: Back_Grey(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(8 << 4) );
  }

  void Menu :: Back_Yellow(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(14 << 4) );
  }

  void Menu :: Back_Lightblue(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(11 << 4) );
  }

  void Menu :: Back_Green(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(10 << 4) );
  }

  void Menu :: Back_Black(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(0 << 4) );
  }

  void Menu :: Back_White(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(15 << 4) );
  }

  void Menu :: Back_Purple(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(5 << 4) );
  }
