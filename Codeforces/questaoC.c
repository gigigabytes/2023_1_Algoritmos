#include <stdio.h>

int p(int l1, int l2) {
  int s;
  s = l1 + l1 + l2 + l2;
  return s;
}

int main() {
  int l1, l2;
  scanf("%d %d", &l1, &l2);
  printf("%d\n", p(l1, l2));
  return 0;
}