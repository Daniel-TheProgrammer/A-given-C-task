#include<stdio.h>
main()
{
    int n,i,sum;
    i=1,sum=0;
    printf("Enter Maximum Value(n):");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        ++i;
    }
    printf("Sum of squares of numbers from between 2 given numbers  is :%d ",sum);
}