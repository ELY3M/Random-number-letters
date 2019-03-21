
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>


int main(int argc, char **argv) {

char chars[] = "abcdefghijklmnopqrstuvwxyz"

char len; 
len = strlen(chars);


printf("%c", chars[rand()%len]); 
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("%c", chars[rand()%len]);
printf("/n/n/n");


}


