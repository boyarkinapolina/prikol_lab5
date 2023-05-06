#include <stdio.h>
#include "sem.h"

int main() {
    char s1[96], s2[96];
    printf("Enter the 1 string: ");
    scanf("%s", s1);
    printf("Enter the 2 string: ");
    scanf("%s", s2);
    
    int place = find(s1, s2);
    if(place != -1) {
        printf("Place of symbol: %d", place);
    }
    else {
        printf("-1\n");
    }
    return 0;
}