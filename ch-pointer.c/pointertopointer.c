#include<stdio.h>

int main(){
    int num=7;
    int *ptr=&num;
    int **p=&ptr;

    printf("%u\n",num);
    printf("%u\n",*ptr);
    printf("%u\n",**p);

    return 0;

}