#include <stdio.h>
#include <stdlib.h>
float xn(int n)
{
    if(n==1)
        return 1;
    if(n==2);
    return 2;

    return (n-1)*xn(n-1)/n+xn(n-2)/n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("xn(%d)=%.2f",n,xn(n));
    return 0;
}
