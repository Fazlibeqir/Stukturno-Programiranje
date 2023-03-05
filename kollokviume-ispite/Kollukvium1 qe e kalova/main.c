#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studenti,indexi[1000],gr1[1000],gr2[1000],gr3[1000],p;
    scanf("%d",&studenti);
    if(studenti>=1 && studenti<=1000){

    for(int i=0;i<studenti;i++)
    {
        gr1[i]=0;
        gr2[i]=0;
        gr3[i]=0;

        scanf("%d",&indexi[i]);
        p=indexi[i]%10;
        if(p>=0 && p<=2)
        {
            gr1[i]=indexi[i];
        }

        if(p>=3 && p<=5)
        {
            gr2[i]=indexi[i];
        }
        if(p>=6 && p<=9)
        {
            gr3[i]=indexi[i];


        }
}

    }
    printf("Grupa 1\n");
    for(int i=0;i<studenti;i++)
    {
        if(gr1[i]!=0)
        printf("%d ",gr1[i]);
    }
    printf("\nGrupa 2\n");
    for(int i=0;i<studenti;i++)
    {
        if(gr2[i]!=0)
        printf("%d ",gr2[i]);
    }
    printf("\nGrupa 3\n");
    for(int i=0;i<studenti;i++)
    {
        if(gr3[i]!=0)
        printf("%d ",gr3[i]);
    }





    return 0;
}
