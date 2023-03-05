#include <stdio.h>
#include <stdlib.h>
int sum_pos(int *array, int n,int ind)
{
    int suma=0;
    if(ind>n)
    {
        return 0;
    }
       for(int i=ind;i<=n;i++)
                suma+=*(array+i);

        return suma;
}

int main()
{
    int *niza;
    int n,ind;
    scanf("%d",&n);
    niza=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&*(niza+i));
   scanf("%d",&ind);
    int result=sum_pos(niza,n,ind);
    printf("%d",result);

    return 0;
}
