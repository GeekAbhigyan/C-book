// use of goto 
#include <stdio.h>

int main() {
    for (int i=0 ; i<10 ; i++){
        if (i == 5)
            goto L1; 
        printf("%d\n", i);
    }
    L1:
        printf("L1\n");
    }