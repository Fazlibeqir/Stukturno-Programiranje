#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[100][100];
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int maxDistnace,maxIndex,first;
      for(i=0;i<m;i++){
            int rowSum=0;
        for(j=0;j<n;j++){
                rowSum+=matrix[i][j];
                }
        double rowAvg=(double) rowSum/n;
        maxDistnace=-1;
        maxIndex=-1;
        first=0;
        for(j=0;j<n;j++){
                int distance=abs(matrix[i][j]-rowAvg);
                if(distance>maxDistnace){
                    maxDistnace=distance;
                    maxIndex=j;
                    first=1;
                }else if(distance==maxDistnace && first==0){
                    maxIndex=j;
                    first=1;
                }
        }
        printf("%d ",matrix[i][maxIndex]);
    }
    return 0;
}
