#include <stdio.h> 
#include <stdlib.h> 

#define MAXIMUM 100

int getLine(char s[]) { 
    int j, i;
    for(i = 0; i < MAXIMUM - 2 && (j = getchar()) != '\n'; i++) { 
        s[i] = j;
    }
    s[i] = '\n';
    s[++i] = '\0';
    return i;
}