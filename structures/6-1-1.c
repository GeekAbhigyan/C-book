#include<stdio.h>

struct hero {
    char name[100];
    int age;
    struct power {
        int range;
        int health;
    } spike ,bull
};
int main (){
        struct hero h1 = {"bull", 50 , {500 , 200}};
        printf ("nested check : %d",h1.bull.health);
    return 0;
}