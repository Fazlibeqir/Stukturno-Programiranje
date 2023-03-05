#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100];
    int m,n,i,j;
    int count = 0;
    scanf("%d %d",&m,&n);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            }
        }
       for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            int rowFlag=1;
            int colFlag=1;
            for(int k=0;k<n;k++)
            {
                if(a[i][k]==0){
                    rowFlag=0;
                    break;
                }
            }
            for(int k=0;k<n;k++)
            {
                if(a[k][j]==0){
                    colFlag=0;
                    break;
                }
            }
            if(rowFlag==1 && colFlag==1){
                count++;
                printf("(%d, %d)\n",i,j);
                }
                else{
                      printf("(%d, %d)\n",i,j);
                }
           }
       }
       printf("%d",count);

    return 0;
}
