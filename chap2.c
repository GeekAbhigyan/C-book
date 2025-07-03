//determine the length of string 

#include<stdio.h>
#include<string.h>


int my_strlen(char s[]);

int main(){
  char str[] = "abhigyan";
  int ans = strlen(str);

  printf("%d", ans );


}

int my_strlen(char s[]){
        int i;
        i = 0 ;

        while (s[i] != '\0'){
            ++i;
        }
    return i;
}