#include<stdio.h>
//pointers
int main(){
    int x = 1 , y=2 ;
    int *p;
    int z[10] = {1,2,3,4,5,6,7,8,9,10};
    int *t;
    t = &z;
    p = &x;
    printf("%d \n",p);
    printf("%d \n",*p);
    for(int i=0; i<10; i++){
        printf("%d , %d \n",(t+i),*(t+i));
    }

    return 0;
}