
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int a[],int i, int j)
{
        int temp=a[i];
        temp=a[j];
        a[i]=temp;
}
void premesti(int a[],int n)
{
    
    for(int i=0,j=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            if(a[i]>0)
            {
            if(i!=j)
                swap(a[i],a[j]);
                j++;
            }
        }
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);

    }
    premesti(a,n);
    print(a,n);


    return 0;
}
