#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[80],b[30][20],c[30],d[30],minP[30],maxP[30];
    int n,i=0,x,l=0,j,k,count=0,init=0,space=0,flag,min=0,max=0,len=0; // od l vo l=0
   // scanf("%d",&n);
  //  for(i=0;i<n;i++)
   // {
        scanf("%[^\n]s",a);  //od a[i] vo a
   // }
 //  for(x=0;x<n;x++){   izkomentriano
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            space++;
    }
    i=0;
    for(j=0;j<(space+1);i++,j++)
    {
        k=0;
        while(a[i]!='\0')
        {
            if(a[i]==' ')
            {
                break;
            }
            else
            {
                b[j][k++]=a[i];
                i++;
            }
        }
        b[j][k]='\0';
    }
    for(j=0;j<space+1;j++)
        printf("%s ",b[j]);            //kontriolli
    printf("\n");
    for(i=0;i<space+1;i++)
    {
        strcpy(c,b[i]);
        count=strlen(b[i]);
        k=0;
        for(l=count-1;l>=0;l--)  //smenato od (for l=count-1;i>=0;i--) vo (for l=count-1;l>=0;l--)
            d[k++]=b[i][l];
        d[k]='\0';
        if(strcmp(d,c)==0){
            flag=1;
        if(init<1)
        {
            strcpy(minP,d);
            strcpy(maxP,d);
            min=strlen(minP);
            max= strlen(maxP);
            init++;
        }
      printf("%s ",d);  //za kontrolla bese dodeka go praev ispitot
        len=strlen(d);
        if(len>=max)
                strcpy(maxP,d);
        else if (len <= min)
            strcpy(minP,d);
        else
            printf("");
   // }}  koment
            }
}
    if(flag ==1)
    {
        printf("%s ",maxP);
    }
    else
    {
        printf("NEMA");
    }
    return 0;
}
