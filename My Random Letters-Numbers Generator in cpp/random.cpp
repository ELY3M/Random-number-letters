/*

This is my favorite random letters / numbers / password genartor !  

I coded this few year ago for my own IRC Bot for its ident and nick.   
because I cant think of good nick to use and I like randomness :) 


Mouse :D


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>


int main() {

char letters[] = "abcdefghijklmnopqrstuvwxyz";
char mixed[] = "01234567890abcdefghijklmnopqrstuvwxyz";

char abc;
abc = strlen(letters);

char len;
len = strlen(mixed);

srand(GetTickCount());
printf("%c", letters[rand()%abc]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);

return printf("\n\n");

}


