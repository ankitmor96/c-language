#include<stdio.h>

int main(){

    int array[6]={11,12,13,14,15};

    int *ptr=&array;

    for(int i=0;i<=5;i++){
        printf("%u=>%d\n",ptr+i,*(ptr+i));
    }
    return 0;
}