/*Range selected from 1 to n*/
#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit of even number from user */
    printf("Print all even numbers till: ");
    scanf("%4d", &n);

    printf("All even numbers from 1 to %d are: \n", n);

    /*
     * Start loop from 2 and increment by 2, 
     * in each repetition
     */
    for(i=2; i<=n; i+=2)
    {
        printf("%4d\n",i);
    }

    return 0;
}