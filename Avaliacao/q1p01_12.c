//1)Escreve uma saída para o programa a seguir: 
#include <stdio.h>

int f1(int a, int b, int c) { 
	int r = b+a*c;
	return r;
}

int main () {
	int a=4, b=5, c=8, d=f1(c,a,b);
	printf("%d\n", d);
	return 0;
}