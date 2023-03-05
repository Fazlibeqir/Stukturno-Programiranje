#include <stdio.h>
#include <stdlib.h>
int prost(int n,int i){
 if(n<4) return 1;
  else if((n%2) == 0) return 0;
  else if(n%i == 0) return 0;
  else if(i*i>n) return 1;
  else return prost(n,i+2);
}
int prvprost(int a)
{

    if(prost(a+1,3))
    {
        return a+1;
    }
    else
    return prvprost(a+1);
}

int main()
{
    int n,ndryshimi;
    scanf("%d",&n);
    ndryshimi=prvprost(n)-n;
    printf("%d - %d : %d\n",prvprost(n),n,ndryshimi);

    return 0;
}
