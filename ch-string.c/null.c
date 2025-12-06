#include<stdio.h>

int main(){

    char letter[6]={'h','e','l','l','o','\0'};

    printf("%S\n",letter);
    for(int i=0;letter[i]!='\0';i++){
        printf("%C",letter[i]);
    }

  return 0;
}