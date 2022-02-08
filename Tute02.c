/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//main program begin
int main() {
  
  float distance;//variable to distance
  float amount;//variable to full amount to be paid
  
  printf( "\nEnter the distance the van has travelled : ");// user prompt
  scanf( "%f" , &distance ); // user input of a distance
  
  if( distance <= 30 )
    amount = distance * 50.0 ;//calculate first 30km amount
  else
    amount = ( 30 * 50.0 ) + ( distance - 30 ) * 40.0;//calculate first 30km and other km's
    
    printf( "\namount to be paid = %.2f\n" , amount );//display full amount

  
  return 0;
}//end main programme
