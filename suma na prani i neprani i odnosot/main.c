#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int n,i,sump=0,sumn=0,brpar=0,brnep=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2){
            brnep++;
            sumn+=a[i];
            }
            else{
                brpar++;
            sump+=a[i];
            }

    }
    printf("Suma parni: %d\n",sump);
    printf("Suma neparni: %d\n",sumn);
    printf("Odnos: %.2f\n",(float)brpar/brnep);

    return 0;
}
