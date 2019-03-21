#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>

static inline unsigned int GetTickCount() { struct timeval tv; gettimeofday(&tv,NULL); return (tv.tv_sec*1000)+(tv.tv_usec/1000); }


int main() {

char letters[] = "abcdefghijklmnopqrstuvwxyz";
char mixed[] = "01234567890abcdefghijklmnopqrstuvwxyz";
char len = strlen(mixed);
char abc = strlen(letters);


srand(GetTickCount());
printf("%c", letters[rand()%abc]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);
printf("%c", mixed[rand()%len]);

printf("\n\n");

printf("%c%c%c%c%c%c%c",letters[rand()%abc],mixed[rand()%len],mixed[rand()%len],mixed[rand()%len],mixed[rand()%len],mixed[rand()%len],mixed[rand()%len]);

return printf("\n\n");

}
