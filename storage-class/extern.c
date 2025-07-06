// extern variable
#include<stdio.h>
int g = 10 ;
int main()
{
    extern int g;
    printf("%d",g);
}