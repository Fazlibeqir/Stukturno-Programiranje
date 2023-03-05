#include <stdio.h>
#include <malloc.h>
int sum_pos(int* a,int n,int ind)
{
    int suma=0;
    if(ind>=n)
    {
        return 0;
    }
    else
    {
        for(int i=ind;i<n;i++)
        {
            suma+=*(a+i);
        }
        return suma;
    }


};
int main()
{
    int n,ind,i,suma;
    scanf("%d",&n);
    int *niza=malloc(n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(niza+i));
    }
    scanf("%d",&ind);
    suma=sum_pos((niza+i),n,ind);
    printf("%d",suma);



    return 0;
}
