#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int tmp,brojMaxZbir;
    int zbir,max=-99;
    for(int i=0;i<n;i++)
    {
        tmp=i;
        zbir=0;
        for(;tmp>0;tmp--)
        {
            if(i%tmp==0)
            {
                zbir+=tmp;
            }
        }
        if(max<zbir)
        {
            max=zbir;
            brojMaxZbir=i;
        }

    }
    printf("%d",brojMaxZbir);
    return 0;
}
