#include<stdio.h>
#include<ctype.h>
#include<string.h>

double atof(char s[]);

int main() {    
 char s[100] ;
 printf("enter a string:");
 gets(s);
 double d = atof(s);
 printf("%f",d);
 return 0;
}

double atof(char s[]) {
    double val, power;
    int i, sign;
    for (i = 0; isspace(s[i]); i++)
        ;
    sign = s[i] == '-' ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power;
}