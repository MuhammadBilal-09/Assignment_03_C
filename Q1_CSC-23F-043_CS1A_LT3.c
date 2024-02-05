#include<stdio.h>
int main()
{
     float distance;
     float time;
     float speed;
     
     printf("Enter distance in km: ");
     scanf("%f", &distance);

     printf("Enter time in hours: ");
     scanf("%f", &time);

     //Conversion of distance from km to m.
     distance = distance * 1000;

     //Conversion of time from hours to sec.
     time = time * 3600;

     //Calculate Speed in mps
     speed=distance/time;
     printf("Speed: %f m/s", speed);

        return 0;     
}