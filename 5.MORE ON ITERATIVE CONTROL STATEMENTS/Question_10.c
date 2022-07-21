//Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the value of N whose table along with it's range you want to print:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("\n%d x %d = %d",N,i,(N*i));
    }
    return 0;

}