#include <stdio.h>

int main() {
  int m,i,j;
  char a='%',b='@';
  scanf("%d",&m);
  if(m>2)
  for(i=0;i<m;i++){
    for(j=0;j<m;i++){
    if(i>=0 && j==0)
       printf("%c",a);
    if(i>0 && j>0)
       printf(".");
    if(i==0&&j==0)
       printf("%c",b);
  }

}
  return 0;
}
