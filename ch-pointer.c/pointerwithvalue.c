#include<stdio.h>

void change(int x){
    x=10;
}
int main(){
    int num=30;
    change(num);
    printf("%d",num);


    return 0;
}