// auto variables are local to the block they are declared in 
// they are created when the block is entered and destroyed when the block is exited 
// the storage class auto is used to declare a variable that will be created on the stack and destroyed when the block is exited



#include<stdio.h>

int main()
{
    auto int a = 5;
    printf("%d",a);
    return 0;
}

// id value is not assigned -> it takes garbage value