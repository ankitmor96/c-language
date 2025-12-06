#include<stdio.h>

int main(){
 //static
    char letter[6]="world";

    letter[1]='a';

    printf("%s\n",letter);
 //dynamic

  /*printf("enter charcter to chang\n");
  scanf("%c",&letter[4]);

  printf("%s",letter);*/
    return 0;
}