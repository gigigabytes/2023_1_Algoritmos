//Escreve uma saída para o programa a seguir: 

#include <stdio.h>

int f2 (int x, int y) {
	int i, ans = 0;
	for (i = 1; i < x; i= i * 4) { 
	ans = ans + y;
	y = y + 1; 
}
	return ans;
}

int main () {
	int a = 60, b = 100, c = f2(b,a);
	printf("%d\n", c);
	return 0;
}

