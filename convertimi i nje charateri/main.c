#include <stdio.h>
#include <stdlib.h>
//converitimi i ni shkronje
int main()
{   
    int x;
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z')
    {    x=c-32;
        printf("E convertume prej << %c >> ne << %c >>",c,x);
    }
    if(c>='A' && c<='Z')
    {
        x=c+32;
        printf("E convertume prej >>  %c << ne << %c >>",c,x);
    }
    
    return 0;
}
