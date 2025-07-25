#include<stdio.h>

void pr(int *p){
    for(int i=0 ; i<5 ; i++){
        printf("%d\n", *(p+i));
    }
}

int main(){

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    pr(p);
    
    printf("/n");

    pr(p+2);

return 0;
}