#include <stdio.h>
#include <ctype.h>
#define SIZE 91
int main() {
    int array[SIZE]= {0};
    char c,index;
    while((c=getchar())!=EOF) {
        if(c>='A' && c<='Z') {
            array[c]++;
        }
    }
    printf("Tekstot e\n");
    printf("Bukva            Broj na pojavi\n");
    for(index='A'; index<='Z'; index++)
        printf("%c \t%d\n",index,array[index]);
    return 0;
}

