//problem in understanding

#include<stdio.h>
#include<ctype.h>
#include<string.h>

// shellsort : sort v[0],v[1],...,v[n-1] into increasing order
void shellsort(int v[], int n);

int main(){
    int i, n, v[100];
    char c;
   while(((c=getchar()) != '\n') && (c != EOF)){
       n++;
   }
   for (int i=0; i<n; i++){
       v[i] = c - '0';
   }
    shellsort(v, n);
    printf("Sorted list in increasing order:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", v[i]);
    return 0;
}



void shellsort(int v[], int n){
    int gap , i , j , temp ;
    for ( gap = n/2 ; gap > 0 ; gap /= 2 ){ // gap = n/2, n/4, n/8, n/16, n/32, ... , 1
        for ( i = gap ; i < n ; i ++ ){ // i = gap, gap+1, gap+2, ... , n-1
          for ( j = i - gap ; j >= 0 && v[j] > v[j+gap] ; j -= gap ){ // j = i-gap, i-2*gap, i-3*gap, ... , 0
            temp = v[j] ; // swap v[j] and v[j+gap]
            v[j] = v[j+gap] ;
            v[j+gap] = temp ;
          }
        }
    }
}

// nahi samajh aaya 