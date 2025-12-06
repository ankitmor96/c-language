#include<stdio.h>
#include<ctype.h.>

int main(){

    char greeting[]="ANKIT";

     char lowercase[sizeof(greeting)];

     int j;

     for(j=0;greeting[j]!='\0';j++){
        lowercase[j]=tolower(greeting[j]);
     }

     lowercase[j]='\0';

     printf("lowercase:%s",lowercase);

     return 0;
}
