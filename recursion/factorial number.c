#include<stdio.h>
int main()
{
    int n;
    printf("Enter the factorail number :");
    scanf("%d",&n);
    printf("the factorial %d number :%d\n",n,fact(n));
}
int fact(int m)
{
    if(m==1)
        return 1;
    else
        return m*fact(m-1);
}
