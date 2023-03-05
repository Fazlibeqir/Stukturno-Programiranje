#include <stdio.h>
#include <stdlib.h>

int main()
{
    int niza[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);
    }
      for(int i=0;i<n;i++){
        printf("%d ",niza[i]);
    }
    printf("\n");
      for(int i=n-1;i>=0;i--){
        printf("%d ",niza[i]);
    }
    printf("\n");
     for(int i=n-1;i>=0;i-=2){
        printf("%d ",niza[i]);
    }
    printf("\n");
     for(int i=0;i<n;i+=2){
        printf("%d ",niza[i]);
    }


    return 0;
}
