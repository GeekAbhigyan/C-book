#include<stdio.h>

int main(){
    int x = 1 , y=2;
    int *p = &x;
    int *q = &y;
    
    printf("%d\n",p);
    printf("%d\n",*p);
    
    printf("%d\n",q);
    printf("%d\n",*q);
    
    int temp ;

    temp = *p;
    *p = *q ;
    *q = temp ;
    printf("\n");


    printf("%d\n",p);
    printf("%d\n",*p);
    
    printf("%d\n",q);
    printf("%d\n",*q);

    printf("\n");
    int s =(*p)++;
    int r = ++*p;
    

     printf("%d\n",r);
    printf("%d\n",s);

    printf("\n");

    int u = (*q)--;
    int t = --*q;
    
    
    printf("%d\n",t);
    printf("%d\n",u);

    printf("\n");
    


    return 0;
}