#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[100][100];
    int m,n;
    int indexM,indexN;
    int sumaPrvKvadrant=0;
    int sumaVtorKvadrant=0;
    int sumaTretKvadrant=0;
    int sumaCetvortKvadrant=0;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    scanf("%d %d",&indexM,&indexN);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //prv kvadrant
                if(indexM>i && indexN<=j){
                    sumaPrvKvadrant+=matrix[i][j];
                    }
                    else if(indexM>i && indexN>=j){// vtor
                            sumaVtorKvadrant+=matrix[i][j];
                        }else if(indexM<=i && indexN<=j){// cetvrt
                            sumaCetvortKvadrant+=matrix[i][j];
                        }else if(indexM<=i && indexN >=j){//tret
                            sumaTretKvadrant+=matrix[i][j];
                        }

        }
    }
      printf("%d ",sumaPrvKvadrant);
        printf("%d ",sumaVtorKvadrant);
        printf("%d ",sumaTretKvadrant);
        printf("%d ",sumaCetvortKvadrant);
    return 0;
}
