#include<stdio.h>

int main(){

    int num = 5;

   for(int i=1;i<=num;i++){

    for(int j=i;j<=num;j++){
        printf("%d",j);
    }
     printf("\n");
   }

    return 0;
}