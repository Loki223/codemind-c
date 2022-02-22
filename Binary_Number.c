// convert decimal to binary

#include <stdio.h>
#include <math.h>

int convert(int);

int main() {
  int n, bin,i;
  scanf("%lld", &n);
  int v=n;
  for(i=0;i<pow(2,n);i++)
  {
  bin = convert(i);
  printf("%0*d
",v, bin);
  }
  return 0;
}

int convert(int n) {
  int bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}