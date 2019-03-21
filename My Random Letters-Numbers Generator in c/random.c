/*

Random Letters/Numbers Generator 
for Win32 only :)

how to use this code

compile in ms vc++ 


Mouse :D

*/


#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>


int main() {

char letters[] = "abcdefghijklmnopqrstuvwxyz";
char mixed[] = "01234567890abcdefghijklmnopqrstuvwxyz";

char len = strlen(mixed);

char abc = strlen(letters);

srand(GetTickCount());

printf("\n\n");
printf("%c", letters[rand()%abc]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);

return printf("\n\n");



}


