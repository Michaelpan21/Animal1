#include "ColourMenu.h"


  void ColourMenu :: Colour_Green(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(2) | FOREGROUND_INTENSITY);
  }

  void ColourMenu :: Colour_Green_Light(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(10) | FOREGROUND_INTENSITY);
  }


  void ColourMenu :: Colour_Blue(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(1) | FOREGROUND_INTENSITY);
  }

  void ColourMenu :: Colour_Blue_Light(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(11) | FOREGROUND_INTENSITY);
  }

  void ColourMenu :: Colour_Red(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(4) | FOREGROUND_INTENSITY);
  }

  void ColourMenu :: Colour_Red_Light(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(12) | FOREGROUND_INTENSITY);
  }

  void ColourMenu :: Colour_White(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(7) );
  }

  void ColourMenu :: Colour_White_Int(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(15) );
  }

  void ColourMenu :: Colour_Grey(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(8) | FOREGROUND_INTENSITY );
  }

  void ColourMenu :: Colour_Purple(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(5) | FOREGROUND_INTENSITY);
  }

  void ColourMenu :: Colour_Yellow(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(6) );
  }

  void ColourMenu :: Colour_Yellow_Ligth(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(13) );
  }





  void ColourMenu :: Back_Grey(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(8 << 4) );
  }

  void ColourMenu :: Back_Yellow(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(14 << 4) );
  }

  void ColourMenu :: Back_Lightblue(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(11 << 4) );
  }

  void ColourMenu :: Back_Green(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(10 << 4) );
  }

  void ColourMenu :: Back_Black(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(0 << 4) );
  }

  void ColourMenu :: Back_White(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(15 << 4) );
  }

  void ColourMenu :: Back_Purple(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(5 << 4) );
  }

  void ColourMenu :: Back_Normal(){
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)(0 << 4) | 7 );
  }
