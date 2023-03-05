#include <stdio.h>
#include <string.h>
int count_vowels(char* word) {
    int vowels = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            vowels++;
        }
    }
    return vowels;
}

int main() {
    FILE* fp = fopen("text.txt", "r");
    char word[21], max_word[21], c;
    int max_vowels = 0;
    while ((c = fgetc(fp)) != EOF) {
        if (isalpha(c)) {
            int i = 0;
            do {
                word[i++] = c;
            } while (isalpha(c = fgetc(fp)));
            word[i] = '\0';
            int vowels = count_vowels(word);
            if (vowels > max_vowels) {
                max_vowels = vowels;
                strcpy(max_word, word);
            }
        }
    }
    fclose(fp);
    if (max_vowels > 0) {
        printf("%s %d\n", max_word, max_vowels);
    } else {
        printf("Nema nitu eden zbor so samoglaska.\n");
    }
    return 0;
}
