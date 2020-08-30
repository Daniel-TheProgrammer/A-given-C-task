#include<stdio.h> 
  
/* Function to calculate x raised to the power y */
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
  
/* Program that  will add up power(2,3) + power(3,3) + power(4,3) + power(5,3) in a
   "for" loop, where power(a,b) is my function
 */
int main() 
{ 
    int x = 2; 
    unsigned int y = 3; 
  
    printf("%d", power(x, y)); 
    return 0; 
} 