#include<stdio.h>

int main(){
    int i=200;
    int *ptr;
    int **ptr_ptr;
    ptr=&i;
    ptr_ptr=&ptr;
    printf("The value of i=%d",**ptr_ptr);
    return 0;
}