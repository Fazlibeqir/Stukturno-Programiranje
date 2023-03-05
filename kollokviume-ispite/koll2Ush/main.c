#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int samoglaski(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    FILE *file = fopen("text.txt", "r");
    char current, previous;
    int count = 0;

    previous = fgetc(file);
    while ((current = fgetc(file)) != EOF) {
        if (isalpha(previous) && isalpha(current) && samoglaski(tolower(previous)) && samoglaski(tolower(current))) {
            printf("%c%c\n", tolower(previous),tolower(current));
            count++;
        }
        previous = current;
    }

    printf("%d\n", count);
    fclose(file);
    return 0;
}

