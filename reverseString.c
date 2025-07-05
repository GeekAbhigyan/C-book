#include<stdio.h>
#include<string.h>

void reverseString(char str[], int n);


int main() {
    char str[100];
    int n=0;
    printf("Enter a string: ");
    char c;
    int n;
    while((c=getchar() != EOF)){
            n++;
    }
    reverseString(str, n);
    printf("Reversed string: %s\n", str);
    return 0;
}

void reverseString(char str[], int n) {
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}