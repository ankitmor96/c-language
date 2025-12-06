#include<stdio.h>

int main(){

    int num[5]={10,11,12,13,14};

    int pos = 3;

    for(int i=pos;i<=5;i++){
        num[i] = num[i+1];
    }

    for(int i=0;i=5;i++){
       printf("%d\n",num[i]);
    }



    return 0;
}