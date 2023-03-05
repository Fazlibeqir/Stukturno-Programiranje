#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int n,i,b,temp,flag=0,pal=0,pozita=0,max=0;
   char a[80];
   scanf("%d",&n);
   for(i=0;i<n;i++)
{
      scanf("%s",a);
      b=strlen(a);
      temp=b;
      if(isalnum('a'))
      {
        if(ispunct('a'))
          {
            flag=1;
            for(i=0;i<b/2;i++)
                {
                    pozita++;
                    if(a[i]==a[n-i+1])
                    {
                        pal=1;
                    if(max<temp)
                        {
                        max=temp;
                        }
                    }
                }
          }
      }

}
if(flag==1 && pal==1)
{
  for(int i=0;i<n;i++)
        if(i==pozita)
        printf("%s",a);
}
else
{
     printf("Nema!");
}

    return 0;
}
