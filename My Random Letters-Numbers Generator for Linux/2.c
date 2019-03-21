#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

static inline unsigned int GetTickCount() { struct timeval tv; gettimeofday(&tv,NULL); return (tv.tv_sec*1000)+(tv.tv_usec/1000); }


int main(int argc, char **argv) {

char chars[] = "abcdefghijklmnopqrstuvwxyz"
"0123456789";

char len;
len = strlen(chars);

srand(GetTickCount());
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);

return printf("\n\n");

} 
