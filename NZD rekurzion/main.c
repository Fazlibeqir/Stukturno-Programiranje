#include <stdio.h>

    int NZD(int m,int n){
        if(m%n==0){
            return n;
        }else if(m==0 && n==0){
            return 0;
        }
        else{
            return NZD(n,m%n);
        }
    }

int main()
{
    int n;
    scanf("%d",&n);
    int niza[n];
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);
    }

    int nzd = NZD(niza[0],niza[1]);
    for(int i=2;i<n;i++){
        nzd = NZD(nzd,niza[i]);
    }
    printf("%d", nzd);
}
