#include<stdio.h>

#define low 0 
#define high 100
#define step 5

int main(){
    for ( float f = low ; f<= high ; f+=step ){
        printf("%3.1f %6.1f \n", f , (f-32)*(5.0/9.0));
    }

}