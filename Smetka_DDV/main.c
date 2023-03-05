#include <stdio.h>

int main(){
  int iznos_na_pari,proizvod,cmetka;
  float ddv=18.0;
  scanf("%d\n %d",&iznos_na_pari,&proizvod);
  cmetka = proizvod * 100.0 / (100.0 + ddv);
  if(cmetka)
  {
  printf("1");
  }
  else
  {
  printf("0");
  }

 return 0;
}
