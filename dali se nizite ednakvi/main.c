#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100];
    int n,m,i;
    printf("Vnesi dolzinata na prvata niza ");
    scanf("%d",&n);
    printf("Vnesi dolzinata na vtorata niza ");
    scanf("%d",&m);
    if(n!=m){
        printf("Ne se ednakvi nizite");
    }
    else
    {
        printf("Elementite na pervata niza: ");
    for(i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Elementite na vtorata niza:");
    for(i=0;i<m;i++)
    {
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
    }

    for(i=0;i<i<n;i++)
      if(a[i]!=b[i])
            break;
        if(i==n)
            printf("Nizite se ednakvi");
        else
            printf("Nizite ne se ednakvi");

    }
    return 0;
}
