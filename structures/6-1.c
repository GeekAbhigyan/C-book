//struct kayword use 
#include <stdio.h>
struct rectangle {
     int length ;
     int breadth ;

};

int main(){
    struct rectangle r = {10 , 20};

    printf("length of rectangele : %d \n",r.length);
    printf("breadth of rectangle: %d \n",r.breadth);
    printf("area of rectangle : %d", r.length * r.breadth);
}