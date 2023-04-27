#include<stdio.h>
int main()
{
    int count=0;
    long long num,n;
    printf("Program to count number of digits in a number\n\n");
    printf("Enter a number\n");
    scanf("%lld",&num);
    n=num;
    do
    {
        n=n/10;
        count++;
    } while (n!=0);
    printf("The number of digit is: %d",count);
    
    return 0;
}