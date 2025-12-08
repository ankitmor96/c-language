#include<stdio.h>

int main(){

int a=30;
float b=12.5;
char letter='a';

int result1=sizeof(a);
printf("%zu\n",result1);


int result2=sizeof(b);
printf("%zu\n",result2);


int result3=sizeof(letter);
printf("%zu\n",result3);


return 0;

}