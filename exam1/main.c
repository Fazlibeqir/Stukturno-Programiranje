#include <stdio.h>
#include <stdlib.h>
void swap(int a[],int index_of_max_1,int index_of_max_2)
{
    int  temp=a[index_of_max_1];
        a[index_of_max_1]=a[index_of_max_2];
        a[index_of_max_2]=temp;
}
void max(int a[],int b)
{
    int temp=0;
    int index_1=0;
    int index_2=0;
    int max_1=a[0];
    int max_2=a[1];
    if(max_1<max_2)
    {
        temp=max_1;
        max_1=max_2;
        max_2=temp;
    }
    for(int i=2; i<b;i++)
    {
        if(a[i]>max_1)
        {
            max_2=max_1;
            max_1=a[i];
            index_1=i;
        }
        else if(a[i]>max_2 && a[i]!=max_1)
        {
            max_2=a[i];
            index_2=i;
        }
        swap(a,index_1,index_2);
    }
    print(a,b);
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    int niza[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&niza[i]);
    }
    max(niza,n);
    return 0;
}
