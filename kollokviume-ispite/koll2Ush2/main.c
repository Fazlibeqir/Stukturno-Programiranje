#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f=fopen("broevi.txt","r");
    int n, number, max = -1, max_number;
    while(fscanf(f, "%d", &n) != EOF){
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            fscanf(f, "%d", &number);
            int first_digit = abs(number);
            while(first_digit >= 10){
                first_digit /= 10;
            }
            if(first_digit > max){
                max = first_digit;
                max_number = number;
            }
        }
        printf("%d\n", max_number);
        max = -1;
    }
    fclose(f);
    return 0;
}
