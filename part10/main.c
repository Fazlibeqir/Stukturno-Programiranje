
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x,y;
    int shkalla,min,sekonda;
    for(x=0.02;x<=0.80;x+=0.01)
    {
       y=180/M_PI*atan(x/sqrt(1-x*x));
       shkalla=y;
       min=(y-shkalla)*60;
       sekonda=((y-shkalla)*60-min)*60+0.5;
       printf("%5.2f\t %3d*\t %2d'\t %2d''\n",x,shkalla,min,sekonda);

    }






    return 0;
}
