//Write a program to print the first N odd natural numbers.
#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the limit upto which you want to print the odd natural numbers:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2 != 0)
          printf("\n%d",i);
    }
    return 0;

}