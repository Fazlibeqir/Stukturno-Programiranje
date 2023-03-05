#include <stdio.h>

int main() {
    int z,a,b,parovi=0,vkupno=0;
    float procent;
    scanf("%d",&z);
    while (a!=0 || b!=0)
    {
        scanf("%d%d",&a,&b);
        if((a+b)==z)
            parovi++;
        vkupno++;
    }
    procent=(parovi*100.00)/(vkupno-1);
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%",parovi,z,z,procent);
    return 0;
}
