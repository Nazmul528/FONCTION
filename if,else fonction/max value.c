#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the  two value :");
    scanf("%d %d",&a,&b);
    printf("the max value :%d",max(a,b));
}
int max(int num1,int num2)
{
    int result;

    if (num1>num2)
        result=num1;
    if (num1<num2)
        result=num2;
    return result;
}
