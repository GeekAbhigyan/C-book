#include<stdio.h>
//print farenheit - celsius table 

int main(){
// int f ,c ;
 float  f , c;
 int up , low , step ;
 
 low = 0 , up = 300 , step = 20 ;
    f = low ;
    while ( f <= up ){
        c = (f-32.0)* 5.0 / 9.0 ;
        printf("%3.0f \t %6.1f \n", f ,c);
        f += step ;
    }

}
// 3.0 f  -> three character long with no decimal 
// 6.1 f -> six character long with 1 decimal 