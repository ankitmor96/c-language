#include<stdio.h>

int main(){
    int basic_salary,gross_salary,HRA,DA,TA;

    printf("enter basic salary:");
    scanf("%d" , &basic_salary);
    HRA = 10 * basic_salary; 
    DA = 5 * basic_salary;
    TA = 8 * basic_salary;

    gross_salary =  basic_salary + HRA + DA + TA;

    printf("gross salary = %.2d\n   ", gross_salary);

    return 0;



}