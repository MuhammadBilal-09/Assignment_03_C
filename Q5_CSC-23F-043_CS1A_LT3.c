#include<stdio.h>
int main()
{
       int quizMarks;
       float percentage;

       printf("Enter Quiz#1 marks: ");
       scanf("%d", &quizMarks);
       if(quizMarks > 5)
       {
           printf("Invalid Input");
       }
       else
       {
           percentage = (float)(quizMarks * 20);

            printf("Percentage Marks of Quiz#1 is: %.2f", percentage);  
       }
               return 0;
}