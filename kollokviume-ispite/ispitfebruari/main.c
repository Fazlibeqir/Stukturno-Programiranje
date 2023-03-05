#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void premesti(int a,int n)
{
    int pozitivnibrojovi[n],negativni[n];
    int poz=-9999;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=poz)
            pozitivnibrojovi[i]=a[i];
        else
            negativni[i]=a[i];

        printf("%d%d",pozitivnibrojovi,negativni);
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
