#include<stdio.h>

int main(){

int num;
 int factorial =1;

printf("enter your int:");
scanf("%d",&num);

if(num<0){
    printf("factorial is not defined for negative number");
}else{
    for(int i=1;i<=num;i++){
       factorial=factorial*i;
    }
     printf("factorial of %d=%d",num,factorial);
}

return 0;

}