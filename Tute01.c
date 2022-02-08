/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int no1, no2;
   int sum;
   float avg;
   
   printf( "Enter Mark1 :", no1 );
   scanf( "%d" , &no1 );
   
   printf( "Enter Mark2 :", no2 );
   scanf( "%d" , &no2 );
   
   sum = no1 + no2;
   avg = sum / 2;
   
   printf( "Average is : %.2f\n" , avg ); 
  
  return 0;
}
