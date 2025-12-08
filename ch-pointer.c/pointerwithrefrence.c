#include<stdio.h>

void change(int *x){
    *x=15;
}
int main(){
    int num=60;
    change(&num);
    printf("%d",num);


    return 0;
}