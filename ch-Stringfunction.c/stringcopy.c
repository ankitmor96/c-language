#include<stdio.h>
#include<string.h>

int main(){

    char greeting[]="hii good morning";

    char copystring[sizeof(greeting)];

    strcpy(copystring,greeting);

    printf("copystring:%s",copystring);

    return 0;

}