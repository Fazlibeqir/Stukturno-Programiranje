#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=0,numri=0,neparni=0,parni=0;
    for(i=1;i<=n;i+=2)
    {
        scanf("%d",&numri);
        if(n%2)
        parni+=numri;
        else
        neparni+=numri;
    }

    if((parni-neparni)<10 && (neparni-parni)>-10)
    printf("Dvete sumi se slicni");
    else
        printf("Dvete sumi nogu se razlikuvaat");
    return 0;
}
