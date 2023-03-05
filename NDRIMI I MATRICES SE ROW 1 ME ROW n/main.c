#include <stdio.h>
#include <stdlib.h>
// ndrimi i ("i"=00,01,02..0N) me(N0,N1,N2,..NN)
// PSH:
//1 2 3
//4 5 6
//7 8 9
//ne
//7 8 9
//4 5 6
//1 2 3
int main()
{
    int a[100][100];
    int n,i,j,flag;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);

            }
}
    for(i=1;i<=n/2;i++)
        for(j=1;j<=n;j++)
        {
        flag=a[i][j];
        a[i][j]=a[n-i+1][j];
        a[n-i+1][j]=flag;
        }
        printf("Matrica\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n\n");



return 0;
}
