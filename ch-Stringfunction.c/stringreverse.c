#include<stdio.h>
#include<string.h>

int main(){

char letter[]="ankit";
char reverseletter[sizeof(letter)];

int length=strlen(letter);

int i,j;

for(i=length-1,j=0;i>=0;i--,j++){
    reverseletter[j]=letter[i];
}

reverseletter[j]='\0';

printf("reverseletter:%s",reverseletter);

return 0;



}