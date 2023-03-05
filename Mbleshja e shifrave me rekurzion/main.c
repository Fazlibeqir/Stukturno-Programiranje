#include <stdio.h>
#include <stdlib.h>
int sum_digits(int n) {
  if (n == 0) 
	return 0;
  return n % 10 + sum_digits(n / 10);
}

int main()
{
    int n,x;
    scanf("%d",&n);
    x=sum_digits(n);
    printf("%d",x);

    return 0;
}
