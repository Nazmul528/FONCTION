#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a,b value :");
    scanf("%d %d",&a,&b);
    printf("the sum is %d",sum(a,b));
}
int sum (int num1,int num2)
{
    return num1+num2;
}
