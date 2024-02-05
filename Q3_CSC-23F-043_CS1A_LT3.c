#include<stdio.h>
int main()
{
     float num1; 
     float num2;
     float num3; 
     float average;

     printf("Enter the first number: ");
     scanf("%f", &num1);

     printf("Enter the second number: ");
     scanf("%f", &num2);

     printf("Enter the third number: ");
     scanf("%f", &num3);

     average = (num1 + num2 + num3)/3;

     printf("The average of three numbers is: %f", average);

     return 0;

}