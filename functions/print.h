#include <unistd.h>
#include <string.h>

void print(char msg[]){

    write (1, msg, strlen(msg));

}


#ifndef PRINT_H
#define PRINT_H
void print(char msg[]);
#endif