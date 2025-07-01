#include<stdio.h>
//print farenheit - celsius table 

int main(){
// int f ,c ;
 float  f , c;
 int up , low , step ;
 
 low = 0 , up = 300 , step = 20 ;
    f = low ;
    printf("farenheit to celsius table \n");
    while ( f <= up ){
        c = (f-32.0)* 5.0 / 9.0 ;
        printf("%3.0f \t %6.1f \n", f ,c);
        f += step ;
    }

}