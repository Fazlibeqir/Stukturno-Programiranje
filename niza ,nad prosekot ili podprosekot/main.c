#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,sum=0;
    float prosek;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=a[i];
        prosek=(float)sum/10;
        if(a[i]>prosek)
        {
            printf("Nad prosek %d\n",a[i]);
        }
        else
        {
            printf("Pod prosek %d\n",a[i]);
        }

    }

    printf("Prosekot e %.2f\n",prosek);

    return 0;
}
