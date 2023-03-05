#include <stdio.h>
#include <stdlib.h>
//ka problem
int max(int a[],int n)
{
   int leftMax[n];
   for(int i=1;i<n;i++)
    leftMax[i]=max(leftMax[i-1],a[i-1]);
   int rightMax;
   for(int i=n-1;i>=0;i--)
   {
       if(leftMax[i]<a[i]&&rightMax <a[i])
       {
           return a[i];
       }
       rightMax=max(rightMax,a[i]);

   }
   return -1;
}

int main()
{
    int a[100];
    int n,results;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n=sizeof a/sizeof a[0];
    results=max(a,n);
    if(results)
    {
        printf("%d",results);
    }
    else{

        printf("No element match the criteria");
       }

    return 0;
}
