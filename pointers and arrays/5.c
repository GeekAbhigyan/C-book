#include<stdio.h>
int (*ptr) (int a , int *p , int b);

int func (int x , int *pt , int y){
    printf("%d \n", x);
    int sum = x + *pt + y;
    return sum;
}

int main(){
    ptr = func;
    int d = 10 ;
    int *p = &d ;
    int ans = ptr(1,p,3);
    printf ("%d", ans);
    return 0;
}
// callback -> 