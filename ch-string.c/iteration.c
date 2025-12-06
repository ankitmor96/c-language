#include<stdio.h>

int main(){
  //static
  char latter[6]="hello";
  printf("%c\n",latter[0]);
  printf("%c\n",latter[1]);
  printf("%c\n",latter[2]);
  printf("%c\n",latter[3]);
   printf("%c\n",latter[4]);

   //dynamic

   for(int i=0;i<=4;i++){
    printf("%c\n",latter[i]);
   }

    return 0;
}