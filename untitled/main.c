#include <stdio.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
      // wtf();
    char z1, z2;
    char niza[81];
    FILE *file = fopen("F:\\IMPORTANTTTTTTTTTTTTTTTTTTTT\\FINKI\\Reopsitory\\StukturnoProgramiranje\\untitled\\podatoci.txt", "r");
    char last_char;
    char temp_z1 = 0, temp_z2=0;
    while((z2 = fgetc(file)) != EOF) {
        z1 = last_char;
        last_char=fgetc(file);
        if (last_char == EOF) {
            temp_z1 = z1;
            temp_z2 = z2;
            z1 = EOF;
            z2 = EOF;
            break;
        }
        temp_z1 = z1;
        temp_z2 = z2;
        if(z2 == '#'){
            break;
        }
    }


    fclose(file);
    z1=temp_z1;
    z2=temp_z2;
    file = fopen("F:\\IMPORTANTTTTTTTTTTTTTTTTTTTT\\FINKI\\Reopsitory\\StukturnoProgramiranje\\untitled\\podatoci.txt", "r");
    while (fgets(niza, sizeof(niza), file)) {
        int start=-1;
        int end=-1;
        int flag=1;
        if(niza[0]=='#')
            break;
        for (int i = 0; i < strlen(niza); i++) {
           if(flag){
            if (niza[i] == z1) {
                start = i+1;
                flag=0;
            }

           }
            if (niza[i] == z2) {
                end = i;
                break;
            }
        }
        for (int i = start ; i < end; i++) {
            printf("%c", niza[i]);
        }
        printf("\n");
    }
    fclose(file);
    return 0;
}
