#include <stdio.h>

int main() {
    char c;
    int cifra,broj=0,zbir=0;
    for(;1;)
    {
        scanf("%c",&c);
        if(c=='!')
            break;
        else
        {
            if(c>='0'&& c<='9'){
                cifra=c-'0';
                broj=broj*10+cifra;
            } else{
                zbir+=broj;
                broj=0;
            }
        }
    }
    zbir+=broj;
    printf("%d",zbir);
    return 0;
}
