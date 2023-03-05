#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[100][100];
    int n,i,j,d1sum=0,d2sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i && j>=(n-i+1))
               d1sum+=a[i][j];

               if(j>=i && j<=(n-i+1))
            d2sum+=a[i][j];
        }

    }
    printf("%d",d1sum+d2sum);
return 0;
}
