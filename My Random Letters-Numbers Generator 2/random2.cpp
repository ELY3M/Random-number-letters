/*


My Crazy password generator 
ELY M. 

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


