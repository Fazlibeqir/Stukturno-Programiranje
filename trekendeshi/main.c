#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        if(a!=b&&b!=c)
        {
            printf("Raznostran");
        }
        if(a==b&&b==c)
    {
        printf("Ramnostran");
    }
        if(a==b||b==c||a==c)
     {
         printf("Ravnokrak");
     }
        float p,s;
        s=(a+b+c)/2;
        p=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\nPloshtina %7.3f",p);


    }
    else
    {
        printf("Ne moze da se konstruktitarawujrbgwayhdfuwandjuwanb");
    }







return 0;
}
