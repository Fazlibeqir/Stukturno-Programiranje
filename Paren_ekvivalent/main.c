#include <stdio.h>
int main()
{
    int a, b, temp=0, flag=0;
    scanf("%d%d",&a,&b);
    if(a<=0 || b<=0)
        printf("Invalid input");
    else
    {
        if(b > a)
        {
            temp = a;
            a = b;
            b = temp;
        }
        while(a)
        {
            if(a/10%10 != b%10)
            {
                flag = 1;
                printf("NE");
                break;
            }
            a/=100;
            b/=10;
        }
        if(flag == 0)
            printf("PAREN");
    }
}