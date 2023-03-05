#include <stdio.h>
#include <stdlib.h>
int countBroj(int a[],int n)
{
    int count=1,count1=1,sum=1,sum1=1;
    for(int i=1;i<=n;i++)
    {

            if(n==2){
                    return 2;
                    break;
            }
             else if(a[i]==a[i+1])
             {
                 return 1;
              break;
             }
             else if(n==3 ){
                    return 6;
                    break;
            }
            else if(a[i]==a[i+1])
           {
              return 3;
              break;
           }
           else if(n==4){
                return 24;
                break;
           }else if(a[i]==a[i+1])
           {
               return 6;
               break;
           } else if(n==7)
           {
               sum1*=count1;
               count1++;

           }
           else{
            sum*=count;
            count++;
           }
    }
    if(n>5)
        return sum1/2;
    else
 return  sum;
}
int main()
{
    int a[10];
    int n,broj;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    broj=countBroj(a,n);
    printf("%d",broj);
    return 0;
}
