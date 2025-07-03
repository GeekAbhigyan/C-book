#include<stdio.h>

int binsearch(int x , int v[], int n);

int main(){

    int arr[9]= {1,4,7,5,3,6,8,2,9};
    int find = 10 ;
    int find2 = 9 ;
    int ans = binsearch(find , arr , 9);
    if (ans != -1 ){
        printf("present");
    }
    else {
        printf("not found");
    }
}

int binsearch(int x , int v[], int n){
    int high , low , mid ;
    low =0 ;
    high = n -1 ;
    while (low <= high ){
        mid = (low + high )/2 ;
        if (x< v [mid]){
            high = mid -1 ;
        }
        else if (x>v[mid]){
            low = mid +1 ;
        }
        else {
            return mid ;
        }
    }

    return -1 ;
}