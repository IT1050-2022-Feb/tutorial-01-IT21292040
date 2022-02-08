/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int no;
  int sum = 0;
  
  printf( "Enter the n number : ");
  scanf( "%d" , &no );
          
  while( no >= 1 ){  
   
    sum = sum + no;
    no--;
  }//end while
         
  printf( "Sum is : %d" , sum );
        
  return 0;
}//end main function
