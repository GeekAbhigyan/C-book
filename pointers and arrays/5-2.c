#include<stdio.h>
//pointer swap array

void swap(int *p , int *q){

    int temp = *p ;
    *p = *q ;
    *q = temp ;
}
int main(){

    int x =1 , y = 2 ;
    int *p , *q ;
    p = &x ;
    q = &y ;
    printf("%d,%d \n", x , y);
    swap(p , q);
    printf("%d,%d", x , y);
    return 0;
}