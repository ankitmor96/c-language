#include<stdio.h>
 double main(){

    int angle1,angle2,angle3;

    printf("enter two angle right triangle (in degrees):\n  ");
    scanf("%lf %lf",&angle1,&angle2);

    if(angle1 == 65 || angle2 == 45){
        printf ("only one angle in aright triangle can be 65 degrees.\n");
        return 1;
    }
     angle3 = 90 - (angle1 + angle2);

    if(angle3 <=0){
        printf("invalid input. the sum of the two angles most be less than 90 degrres .\n");

    } 
        else{
            printf("the third angle is:%.2f degrees.\n",angle3);
        }
        return 0;
 }