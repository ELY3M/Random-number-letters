/*

This is my favorite random letters / numbers / password genartor !  

I coded this few year ago for my own IRC Bot for its ident and nick.   
because I cant think of good nick to use and I like randomness :) 


ELY M.  


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"


int main ()
{




			CString randomnick;
			srand(GetTickCount());

			char a = (rand() % 26) + 'a';
			char vAlpha[] = "0123456789abcdefghijklmnopqrstuvwxyz";
			char b = vAlpha[ rand() % 36 ];
			char c = vAlpha[ rand() % 36 ];
			char d = vAlpha[ rand() % 36 ];
			char e = vAlpha[ rand() % 36 ];
			char f = vAlpha[ rand() % 36 ];
			char g = vAlpha[ rand() % 36 ];
			randomnick.Format("%c%c%c%c%c%c%c \n\n", a, b,c,d,e,f,g );

			printf(randomnick);
			return 1;


}



