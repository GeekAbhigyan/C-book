#include<stdio.h>
// makes temproary disposable variable for computation

int power(int base , int n){
    int p=1;
    for ( int i = 0 ; i< n ; i++){
        p = p * base ;
    }

    return p;

}
int main(){

    int ans = power(2,3);
    printf ("%d \n", ans);
}