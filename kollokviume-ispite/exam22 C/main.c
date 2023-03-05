/*Во рамките на текстуална датотека matrica.txt се сместени елементите (целобројни вредности) од една матрица (A). Во првиот ред од датотеката се запишани бројот на редици n и бројот на колони m на матрицата (n, m < 120). Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.

Да се испечати колку индексни броеви има во секоја колона поединечно.

Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.




Помош:

Индексен елемент: вредноста на елементот Aij е иста со ij како број

- ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број

Пример:

Влез: // датотека matrica.txt

4  5
0    1    2    3    4

5    6    7    8    9

10  21  22  23  11

0    1    2    33    4

Излез:

1

2

2

3

1


Објаснување:

Во матрицата A индексни елементи се:

1ва колона: 0

2ра колона: 1, 21

3та колона: 2, 22

4та колона: 3, 23, 33

5та колона: 4

For example:

Input	Result
4 5
0 1 2 3 4
5 6 7 8 9
10 21 22 23 11
0 1 2 33 4
#
1
2
2
3
1
3 3
0 1 2
10 11 12
20 21 22
#
3
3
3
*/
//E KAM TEKSTIN MUJ ME BO
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 1000

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    //vasiot kod ovde
    int a[max][max],count=0,n,m;
    scanf("%d%d",&n,&m);
    FILE *fp;
    /*if((fp=fopen("matrica.txt","r"))==NULL)
    {
        puts("!");
        exit(-1);
    }*/
    int i=0,j=0;
    while((a[i][j]=fgetc(fp))!=EOF){
        if(i>=0 && i<=n);
        while((a[i][j])%10==j && ((a[i][j]-a[i][j]%10)/10==i))
            {
                count++;
                j++;
            }
            printf("%d",count);
    i++;
    }

   // for(int i=0;i<n;i++)
    //{
        //for(int j=0;j<m;j++)
        //{
            //if(a[i][j]==i*10no+j)
              //  count++;
        //}
      //  printf("%d",count);
    //}


    return 0;
}
//maybe correct
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    FILE *fp;
    fp = fopen("matrica.txt", "r");
    fscanf(fp, "%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fscanf(fp, "%d", &matrix[i][j]);
        }
    }
    fclose(fp);
    // rest of the code is same as previous
    int columnCount[m];
    for (int i = 0; i < m; i++) {
        columnCount[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == (i*100 + j)) {
                columnCount[j]++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%d\n", columnCount[i]);
    }

    return 0;
}

