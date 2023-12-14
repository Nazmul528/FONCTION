#include<stdio.h>
int main()
{
    int a,b,n,i;
    printf("how many sum :");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("Enter the a,b value :\n");
        scanf("%d %d",&a,&b);
        printf("the sum is %d\n\n",sum(a,b));
    }
}
int sum (int num1,int num2)
{
    return num1+num2;
}
