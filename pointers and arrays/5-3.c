#include<stdio.h>
int my_strlen(char *s);
int my_strlen(char *s){
    int n;
    for (n = 0; *s != '\0'; s++){
        n++;
    }
    return n;
}
//return the length of string

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length of string: %d", my_strlen(str));
    return 0;

}

// it is possible to pass the part of array in a particular function 
