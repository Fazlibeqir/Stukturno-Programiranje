#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 81
int main()
{
  char a[MAX];
  FILE *f;
  f= fopen("input.txt", "r");
  while(fgets(a,MAX,f)!=NULL)
  {

      int sum=0;
      int i;
      for(i=0;i<strlen(a);i++){
        if(isalpha(a[i]))
            printf("%c",a[i]);
        else if(isdigit(a[i]))
        {
            int num=0;
            while(isdigit(a[i])){
                num=num*10+a[i]-'0';
                ++i;
            }
            sum+=num;
            --i;
        }
      }
      printf("%d\n",sum);
    }
   fclose(f);
}
