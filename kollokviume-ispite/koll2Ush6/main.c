#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int matrix[100][100];
    int m,n,i,j;
    int redicaCount=0;
    int kolonaCount=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
    //redica
    for(i=0;i<m;i++){
            int count=0;
        for(j=0;j<n;j++){
            if(matrix[i][j]==1){
                count++;
                if(count==3){
                    redicaCount++;
                    break;
                }
            } else{
                count=0;
            }
        }
    }
    // kolona
     for(i=0;i<n;i++){
            int count=0;
        for(j=0;j<m;j++){
            if(matrix[j][i]==1){
                count++;
                if(count==3){
                    kolonaCount++;
                    break;
                }
            } else{
                count=0;
            }
        }
    }
    printf("%d",redicaCount+kolonaCount);

    return 0;
}
