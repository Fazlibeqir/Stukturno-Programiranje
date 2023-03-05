#include <stdio.h>

int main() {
    int i, n, broj,brojcf,flag=0;
    scanf("%d %d", &i, &n);
    for (; i < n; i++) {
        broj=i;
       for(;broj>0;broj/=10)
       {
           brojcf=broj%10;
           if(brojcf%2==0)
               flag=1;
           else
               flag=0;

       }
       if(flag==1)
       {
           printf("%d\n",i);
           break;
       }
    }
    if(flag==0)
    {
        printf("NE");
    }
    return 0;
}
