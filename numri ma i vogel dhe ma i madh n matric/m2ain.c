#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[100][100];
    int n,i,j,max=0;
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
            if(i==1){
                int min=a[0][0];
            if(min<a[i][j]){
                min=a[i][j];}
            if(max<=min)
            {
                max=min;

            }
        }
    }
    }


return 0;
}
