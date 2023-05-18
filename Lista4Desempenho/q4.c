//Escreva um programa que leia um número inteiro n (1 ≤ n ≤ 1012) e mostre se n é primo.
//(a) Verifique o resultado e o tempo de execução do seu programa para cada um dos seguintes
//valores: 13, 21, 83, 87, 103, 111, 6471, 6473, 11021, 11027, 32531, 32567, 111467,
//2040010289, 2040010291, 61553013897, 62558003897, 62558013447, 91989664471
//e 91989664481.

#include <stdio.h>
#include <time.h>

int is_prime(long long n){
    long long i,divisores=0;
    for (i=1 ; i<=n ; ++i)
        if (n%i==0)
            divisores++;
    return divisores==2?1:0;
}

int main(){
    long long n;
    clock_t inicio,fim;
    scanf("%lld",&n);
    inicio = clock();
    int ppp = is_prime(n);
    fim = clock();
    fprintf(stderr, "[lld]" Tempo: %lld milisegundos.\n",(long long)((fim-inicio)*1000)/CLOCKS_PER_SEC);
    if (ppp)
        printf("%lld é primo.\n",n);
    else
        printf("%lld não é primo.\n",n);
    return 0;
}