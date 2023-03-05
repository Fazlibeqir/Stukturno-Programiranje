//
// Created by Beqir Fazli on 11/20/22.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define LIM 1000000

//Connect words
char *
concat (char *s1, char *s2, char *s3) {

    int len = strlen (s1) + strlen (s2) + strlen (s3) + 1;

    char *result = (char) malloc (len);

    strcpy (result, s1);

    strcat (result, s2);

    strcat (result, s3);

    return result;

}



//convert from int to char(string)
char *
fromIntToChar (long long int br) {

    long long int limit = LIM, current, t = 0;

    if (br > LIM)

        return "\nCant calculate ";

    if (br == 0)

        return "zero";

    char *tensPower[] = { "", "million", "thousand" };

    char *singleDigits[] = {
        "", "one", "two", "three", "four", "five",
        "six", "seven", "eight",
        "nine", "ten", "eleven", "twelve",
        "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",

        "eighteen", "nineteen"
    };

    char *tensMultiple[] = {
        "", "twenty", "thirty", "forty", "fifty", "sixty",
        "seventy", "eighty",
        "ninety"
    };

    if (br < 20)

        return singleDigits[br];

    char *answer = "";

    for (long long int i = br; i > 0; i %= limit, limit /= 1000) {

        current = i / limit;

        while (current == 0 && limit > 0) {

            i %= limit;

            limit /= 1000;

            current = i / limit;

            ++t;

        }

        if (current > 99) {

            answer = concat (answer, singleDigits[current / 100], " hundred ");

        }

        current = current % 100;

        if (current > 0 && current < 20) {

            answer = concat (answer, singleDigits[current], " ");

        } else if (current % 10 == 0 && current != 0) {

            answer = concat (answer, tensMultiple[current / 10 - 1], " ");

        } else if (current > 20 && current < 100) {

            answer = concat (answer, tensMultiple[current / 10 - 1], " ");

            answer = concat (answer, singleDigits[current % 10], " ");

        }

        if (t <= 2)

            answer = concat (answer, tensPower[++t], " ");

    }

    return answer;

}



int main () {

    char letter;

    scanf ("%c", &letter);

    for (long long int i = LIM; i >= 1; i--) {

        char *Number = fromIntToChar (i);

        if (strpbrk (Number, &letter) == NULL)

        {

            printf ("\n%lld: ", i);

            printf ("%s\n", Number);

            break;

        }


    }
    }
