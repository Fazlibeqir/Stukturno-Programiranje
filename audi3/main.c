#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ammintrin.h>
//#include <aviriff.h>
//#include <immintrin.h>

int main(){
    for(int i=1;i<9;i++)
    { for(int j=1;j<9;j++)
        if(i/2==4) printf("%d",i);
        else printf("%d",++i);
        if(i==9){
            printf("%d%d",i%3,i/4);
            printf("%d%d%d%d",i/5,i%4,i--,--i);
        }
    }
    //**prinf("%d",a^2+b%3+c);
    //
    return 0;
}