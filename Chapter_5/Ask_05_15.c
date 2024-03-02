// Άσκηση 5.15 'Ask_05_15.c' (Σελ. 207)

#include <stdio.h> 
#include <math.h> 

double hypotenuse (double side1, double side2)
{
   return sqrt(pow(side1,2)+pow(side2,2));
}

int main( void )
{
   printf("\nΠλευρά 1 (%.1f). Πλευρά 2 (%.1f). Υποτείνουσα: %f\n", 3.0, 4.0, hypotenuse(3.0, 4.0));
   printf("\nΠλευρά 1 (%.1f). Πλευρά 2 (%.1f). Υποτείνουσα: %f\n", 5.0, 12.0, hypotenuse(5.0, 12.0));
   printf("\nΠλευρά 1 (%.1f). Πλευρά 2 (%.1f). Υποτείνουσα: %f\n\n", 8.0, 15.0, hypotenuse(8.0, 15.0));
   
   return 0;
} 
