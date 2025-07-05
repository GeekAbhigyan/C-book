#include <stdio.h>
#define maxline 1000

int getline(char line[] , int max);
int strindex(char source[] , char searchfor[]);

char pattern[] = "ould";

int main(void) {
    char line[maxline];
    int found = 0;
    while (getline(line , maxline) > 0) {
        if (strindex(line , pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    }
    return found;
}

//getline

int getline(char s[] , int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

//strindex  

int strindex(char s[] , char t[]) {
    int i , j , k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i , k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}