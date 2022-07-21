//Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the limit upto which you want to print the natural numbers:");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        printf("\n%d",i);
    }
    return 0;
}