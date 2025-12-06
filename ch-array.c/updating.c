#include<stdio.h>

int main(){
     int num[5] = {1,3,5,7,9};

     for(int i=0;i<=4;i++){
        printf("%d\n",num[i]);
     }
     num[2]=10;
     for(int i=0;i<=4;i++){
        printf("%d\n",num[i]);
     }

     return 0;
}