#include <stdio.h>

long long int mult(int a, int b) {
    long long int s = a*b;
    return s;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%lld\n", mult(a, b));
    return 0;
}