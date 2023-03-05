#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,sum=0;
    int a[100][100],b[100][100];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
            sum+=a[j][i];
              b[i][j]=sum;
        }

    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {

            printf("%d\t",b[i][j]);
        }
    }


    return 0;
}
