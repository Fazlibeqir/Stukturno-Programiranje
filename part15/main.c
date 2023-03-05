#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    int a[SIZE][SIZE],i,n,m,j,sumredici=0,sumkolona=0;
    printf("sa numra do ti kesh n varg: \n");
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
     for(i=0;i<n;i++)
        for(j=0;j<m;j++)
     {
         if((j+1)%2)
         {
             sumkolona+=a[i][j];
         }
         if(!((i+1)%2))
         {
             sumredici+=a[i][j];
         }

     }
    printf("%d",sumkolona-sumredici);


    return 0;
}
