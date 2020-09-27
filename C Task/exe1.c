#include <stdio.h>

/* Function declarations */
int max(int num1, int num2,num3,num4);
int min(int num1, int num2,num3,num4);



int main() 
{
    int num1, num2 maximum, minimum;
    int num3, num4 maximum,minimum;
    
    /* Input 4 numbers from user */
    printf("Enter any two numbers: ");
    scanf("%d%d%d%d", &num1, &num2, &num3,&num4);
    
    maximum = max(num1, num2, num3,num4);  // Call maximum function
    minimum = min(num1, num2, num3,num4);  // Call minimum function
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}

/**
 * Find maximum between 4 numbers.
 */
int max(int num1, int num2, int num3, int num4)
{
    return (num1 > num2  ) ? num1 : num2; 
    return (num3 > num4 ) ? num3 : num4; 
}
}

/**
 * Find minimum between 4 numbers.
 */
int min(int num1, int num2, int num3, int num4) 
{
    return (num1 > num2 ) ? num2 : num1;
    return (num3 > num4 ) ? num2 : num1;
}