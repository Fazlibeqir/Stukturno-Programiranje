/*Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
 Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место),
  а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа,
којашто е палиндром (се чита исто од од лево на десно и
од десно на лево) и што содржи барем еден специјален знак.
Ако нема такви низи, се печати "Nema!".
Ако има две или повеќе низи што го задоволуваат овој услов,
се печати првата низа којашто го задоволува условот.

9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321

result
Kfd?vsvv98_89vvsv?dfK
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int n,i,b,temp,flag=0,pal=0;
   int pozita=0;
   char a[80];
   int max=0;


   scanf("%d",&n);
   for(i=0;i<n;i++)
{
      scanf("%s",a);
      b=strlen(a);
      temp=b;
      if(isalnum('a'))
      {
        if(ispunct('a'))
        {
            flag=1;



            for(i=0;i<b/2;i++)
                {
                    if(a[i]==a[n-i+1])
                    {
                        pozita=i;
                        pal=1;
                    if(max<temp)
                        {
                        max=temp;
                        }
                    }
                }
      }
      }

}
if(flag==1 && pal==1)
{
  for(int i=0;i<n;i++)
        if(i==pozita)
        printf("%s",a);

}
else
{
     printf("Nema!");
}

    return 0;
}
