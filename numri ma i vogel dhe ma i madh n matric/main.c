#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[100][100];
    int m,n,i,j,max=0,pozitaI,pozitaJ;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(max<=a[i][j])
            {
                max=a[i][j];
                pozitaI=i;
                pozitaJ=j;
            }
        }
    }
    printf("Maximalnta vredonost e %d so pozicia a[%d][%d]",max,pozitaI,pozitaJ);



return 0;
}
