#include<stdio.h>
#include<math.h>
int main()
{
        double pi = 3.142;
        double radius, volume;

      printf("Enter radius of the sphere: ");
      scanf("%lf", &radius);

      volume = (4.0 / 3.0)*pi*pow(radius, 3);

      printf("The volume of the sphere with radius %.2lf is %.2lf, radius, volume"); 

         return 0;
}