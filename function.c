#include<stdio.h>

int power( int a ){
    int ans =1 ;
    for ( int i=0 ; i<a ; i++){
        ans = 2* ans ;
    }
    return ans ;
}

int main(){

    int ans = power(10);
    printf("%d",ans );
    return 0;
}