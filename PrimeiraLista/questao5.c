#include <stdio.h>

int ler (int a) {
  int l = a;
  return l;
}

int soma (int b, int c, int d, int e) {
  int s = b + c + d + e;
  return s;
}

int main() {
  int a, b, c, d, e;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  printf("%d\n", soma(b, c, d, e));
  return 0;
}