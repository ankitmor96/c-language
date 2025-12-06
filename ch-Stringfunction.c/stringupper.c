#include<stdio.h>
#include<ctype.h>

int main(){

    char word[]="ankit";

    char uppercase[sizeof(word)];

    int i;

    for(i=0;word[i]!='\0';i++){
        uppercase[i]=toupper(word[i]);
    }

    uppercase[i]='\0';
    printf("uppercase:%s\n",uppercase );

    return 0;
}