//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the limit upto which you want to print the natural numbers:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}