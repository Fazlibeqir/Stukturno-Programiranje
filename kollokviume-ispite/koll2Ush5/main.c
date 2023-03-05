#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    f=fopen("livce.txt","r");
    int uplata;
    char maxNiza[10];
    int maxType=0;
    double maxKoef=0;
    double totalKoef=1;
    char niza[10];
    int type;
    double koeficient;
    fscanf(f,"%d",&uplata);
    while(fscanf(f,"%s %d %l",niza,&type,&koeficient)!=EOF){
        if(*niza!='#'){
        if(koeficient>maxKoef){
            maxKoef=koeficient;
            strcpy(maxNiza,niza);
            maxType=type;
        }
        totalKoef*=koeficient;
        }


    }
    printf("%s %d %.2l\n",maxNiza,maxType,maxKoef);
    printf("%.2l",totalKoef*uplata);

    fclose(f);
    return 0;
}
