#include<stdio.h>

int main(){

    int a=14;
    
    int *ptr=&a;

    printf("address of pointer:%u\n",ptr);
    printf("scaling value of pointer :%u\n",ptr+1);

    return 0;
}