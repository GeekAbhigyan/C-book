#include<stdio.h>
#include<ctype.h>
#include<string.h>

//convert s to integer ; version 2

int atoi2(char s[]);

int main(){

    char s[] = "1234" ;
    printf("%d", atoi2(s));
}

int atoi2(char s[]){
    int i, n, sign ;
    for ( i = 0  ; isspace(s[i]) ; i++){
        ;
    }
    sign = (s[i] == '-') ? -1 : 1 ;
    if (s[i] == '+' || s[i] == '-'){
        i++ ;
    }
    for ( n = 0 ; isdigit(s[i]) ; i++){
        n = n * 10 + (s[i] - '0') ;
    }
    return sign * n ;
}