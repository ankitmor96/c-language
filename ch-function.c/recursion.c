#include<stdio.h>


int factorial(int n){
    if(n<1 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){

    int result1=factorial(5);
    printf("%d\n",result1);

    return 0;
}