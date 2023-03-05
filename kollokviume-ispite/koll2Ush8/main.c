#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    FILE *file;
    file=fopen("dat.txt","r");
    char niza[100];
    char lastRow[100]="";
    int firstDigit=-1,lastDigit=-1;
    int lenBetween=0;
    int maxLenBetween=0;
    int countDigit=0;
    while(fgets(niza,sizeof(niza),file)!=NULL) {
        niza[strlen(niza)-1]='\0';
        firstDigit = -1;
        lastDigit = -1;
        lenBetween = 0;
        maxLenBetween = 0;
        countDigit = 0;

        for(int i=0; i<strlen(niza); i++) {
            if(isdigit(niza[i])) {
                countDigit++;
                if(firstDigit==-1) {
                    firstDigit=i;
                }
                lastDigit=i;
            }
        }

        if(firstDigit!=-1 && lastDigit!=-1) {
            for(int i=firstDigit; i<=lastDigit; i++)
                lenBetween++;
        }

        if(countDigit>=2 && lenBetween>=maxLenBetween ) {
            maxLenBetween=lenBetween;
            lenBetween=0;
            strcpy(lastRow,niza);
        }
    }

    if(strlen(lastRow) > 0) {
        for (int i = firstDigit; i <= lastDigit; i++) {
            printf("%c", lastRow[i]);
        }
    }
    fclose(file);
    return 0;
}
