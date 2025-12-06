#include <stdio.h>


int main(){
  int celsius, farenhit;

 printf("enter tamperature in celsius:");
 scanf("%d", &celsius);

 farenhit =(celsius * 9.0 / 5.0) + 32.0;

 printf("%.2d celsius is equal to %.2dfcelsius\n", celsius ,farenhit    );

 
  

   return 0;
}
