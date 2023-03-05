#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
            flag=1;
        else
            flag=0;
    }
    if(flag==1)
    {
        printf("Rastecka");
    }
    else
    {
        printf("Opagacka");
    }

    return 0;
}
