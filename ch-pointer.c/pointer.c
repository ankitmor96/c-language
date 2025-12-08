#include<stdio.h>

int main(){

    int a=8;

    int *ptr =&a;

    *ptr=5;

    printf("pointer address:%u\n",ptr);
    printf("a value:%d\n",a);

    return 0;
}