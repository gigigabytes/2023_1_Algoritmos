#include <stdio.h>

long long int mult(long long int a,long long int b) {
    long long int s = a*b;
    return s;
}

int main(){
   long long int a,b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", mult(a, b));
    return 0;
}