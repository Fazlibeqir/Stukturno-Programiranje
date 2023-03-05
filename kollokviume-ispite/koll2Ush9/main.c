#include <stdio.h>
#include <stdlib.h>
double dropka(int niza[],int n){
    if(n==1)
    {
        return (double)niza[0];
    }
    return (double)niza[0]+1.0/dropka(niza+1,n-1);
}
int main()
{
   int array[100];
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
   }
    printf("%lf\n",dropka(array,n));
    return 0;
}
