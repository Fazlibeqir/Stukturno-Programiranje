#include<stdio.h>
#include <string.h>
//sedi inputi qka esht
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main () {
    wtf();
    FILE *f=fopen("input.txt","r");
    int matrica[60][60];
    int n,m,i,j;
    fscanf(f,"%d %d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        fscanf(f,"%d",&matrica[i][j]);
    }
    int rsum[10],csum[10];
    for(i=0;i<m;i++){
            rsum[i]=0;
            for(j=0;j<n;j++)
    {
        rsum[i]+=matrica[i][j];
    }
    for(i=0;i<m;i++)
    {
        csum[i]=0;
        for(j=0;j<n;j++)
        {
            csum[i]+=matrica[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(rsum[i]<csum[i])
               fprintf(f,"% 4d",matrica[i][j]);
               /* fprintf(f,"% 4d",csum[i]);
                else
                {
                 fprintf(f,"% 4d",rsum[i]);
               }*/
        }
    }
    }
    fclose(f);
    return 0;
}
