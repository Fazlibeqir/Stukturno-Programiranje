#include <stdio.h>

int main() {
    int n,broj=9;
    scanf("%d",&n);
    --n;
    for(;n>9;--n)
    {
        int tmp=n,sprotiven=0,cifri=0;
        for(;tmp>0;tmp/10)
        {
            ++cifri;
            sprotiven=sprotiven*10+tmp%10;
        }
        if(sprotiven%cifri==0)
        {
            broj=n;
            break;
        }
    }
    if(n<9)
        printf("Brojot ne e validen");
    else
        printf("%d",broj);
    return 0;
}
