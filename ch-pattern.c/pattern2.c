#include<stdio.h>

int main(){

    int num = 5;

    for(int i=5;i>=1;i--){
        for(int j=i;j<=num;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}