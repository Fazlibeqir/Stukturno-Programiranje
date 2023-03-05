/*Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.

Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.


For example:

Input	Result
Svrznicite vo makedonskiot jazik se sluzbeni zborovi
odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
ama ili no, a usloven odnos so ako itn.*/
//E KAM TEXTIN MUJ ME BO
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define max 10000
int length(char *s)
{
    int i,len=0;
    for(i=0;s[i]!='\0';i++)
        len++;
    return len;
}
void svrznici(char array[])
{
    int i,count=0;
    for(i=0;i<max;i++)
    {
        if(length(array[i])<=3 && strcmp(length(array[i]),length(array[++i])))
            count++;
    }
    printf("%d",strcat(count,array[i]));
}

int main()
{
    char **array;
    array=malloc(sizeof(char*)*max);
   for(int i=0;i<max;i++)
   {
       fgets(array,100,stdin);
       length(array);
   }

   svrznici(array);
    return 0;
}
