#include<stdio.h>
//print  celsius to farenheit table 

int main(){
// int f ,c ;
 float  f , c;
 int up , low , step ;
 
 low = 10 , up = 40 , step = 2 ;
    c = low ;
    printf(" celsius to farenheit  table \n");
    while ( c <= up ){
        f = ((c * 9.0) /5 )+ 32 ;
        printf("%3.0f \t %6.1f \n", c ,f);
        c += step ;
    }

}