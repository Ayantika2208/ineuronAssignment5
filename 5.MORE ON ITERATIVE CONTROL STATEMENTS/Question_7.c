//Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the limit upto which you want to print the even natural numbers:");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        if(i%2 == 0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}