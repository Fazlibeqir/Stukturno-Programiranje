#include <stdio.h>
#include <stdlib.h>
/*5
200 100 30
255 123 255
100 100 100
300 120 8
40 80 255*/
//muj me bo qeta
int main()
{
    int N,R,G,B,max;
    int flag=1;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
            scanf("%d %d %d",&R,&G,&B);
      if((R>=0 && R<=255)&&(G>=0 && G<=255)&&(B>=0 && B<=255)){
    if(flag)
        {
            max=R;
            flag=0;
        }
        if(max<G && max<B){
            R=0;
            if(G<B){
                max=B;
                G=0;
            }else{
                max=G;
                B=0;
            }
        }else if(max>G && max>B){
            G=0;
            B=0;
	flag=1;
        }
        else{
            if(max==G){
                R=0;
                B=0;
            }else{
                R=0;
                G=0;
            }

        }
     if(max==R){
    printf("%d %d %d\n",max,G,B);
    break;
    }
    if(max==G){
        printf("%d %d %d\n",R,max,B);
    break;
    }
    if(max==B){
        printf("%d %d %d\n",R,G,max);
        break;
    }
      }


    }

    return 0;
}
