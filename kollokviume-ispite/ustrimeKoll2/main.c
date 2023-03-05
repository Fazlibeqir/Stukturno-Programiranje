#include <stdio.h>
#include <string.h>
#include <ctype.h>

int  samoglaski(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int brojSoglaski(char * soglaski){
    int len=strlen(soglaski);
    int count=0;
    /*for(int i=0;i<len;i++)
        {
        if(isalpha(soglaski[i]))
        if(!samoglaski(tolower(soglaski[i])))
            count++;
            }
    */
    if(0<len)
    {
        if(isalpha(*soglaski))
        if(!samoglaski(tolower(*soglaski)))
            count++;
            return count+brojSoglaski(soglaski+1);
    }
    return count;
}
int main() {
    char array[30];
    fgets(array,sizeof(array),stdin);
    int rezult=brojSoglaski(array);
    printf("%d",rezult);
    return 0;
}
