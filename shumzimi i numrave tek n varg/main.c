#include <stdio.h>
#include <stdlib.h>
int main()
{
    	int a[20];
    	int i,n,sum=1,flag=1;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
        		scanf("%d",&a[i]);
             		if(a[i]%2)
        		{
                		sum=sum*a[i];
                		flag=0;
        		}
        		else
              		{
           		                continue;
        		}

    	}

    	if(flag==1)
    	{
        		printf("1");
    	}
    	else
    	{
        		printf("%d",sum);
    	}

    return 0;
}
