#include <stdio.h>
#define NIZA 10000

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
    int niza[NIZA];
    int i=0;
   while(i<NIZA)
{
    scanf("%d\n",&niza[i]);
    i++;
}

    int nzd = NZD(niza[0],niza[1]);
    for(int i=2;i<NIZA;i++){
        nzd = NZD(nzd,niza[i]);
    }
    printf("%d", nzd);
}
