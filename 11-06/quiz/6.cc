#include <stdio.h>
int main () {

  int a;

  double b = 3.14, *pd;

  pd = &b;

  a = *pd;
  printf("%d\t%f\n", a, *pd);

  return 0;
}