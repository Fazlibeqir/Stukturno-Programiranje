
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char prva=0,posledna=0,c;
    int b=0,iw=0,len=0;
    FILE *pok;
    char input[80];
    FILE *fp;// Open file in write mode
    if ((fp = fopen("output.txt", "w")) == NULL) {
        fprintf(stderr, "Error opening file!\n");
        exit(1);
    }

// Read input and write to file and console
    while (1) {
        printf("Enter a line of text (or 'quit' to exit): ");
        fgets(input, 80, stdin);

        // Check for 'quit'
        if (strcmp(input, "quit\n") == 0) {
            break;
        }

        // Write to file
        fputs(input, fp);

        // Print to console
        printf("You entered: %s", input);

       if((pok = fopen("Index.txt","r")) == NULL){
            fprintf(stderr,"Ne se otvori datotekata %s", "Index.txt");
            exit (0);
        } else {
            while((c=fgetc(pok))!=EOF) {
                if(isalpha(c)) {
                    if(iw) {
                        iw=1;
                        prva=c;
                    }
                    len++;
                    posledna=c;
                } else {
                    if(iw) {
                        iw=0;
                        if(len>3 && toupper(prva)==toupper(posledna))
                            b++;
                        len=0;
                    }
                }
            }
            if(iw&& len>3&&toupper(prva)==toupper(posledna))
                b++;
            fclose(pok);
        }
    }

// Close file
    fclose(fp);

    printf("Number of words that meet the criteria: %d\n", b);

    return 0;
}
