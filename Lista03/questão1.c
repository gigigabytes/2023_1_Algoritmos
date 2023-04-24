int main(){  
int a=10,b=20;   /* atribui os valores 10 e 20 às variáveis a e b*/ 
  
int *pa, *pb;  /*cria dois ponteiros pa e pb */
  
pa = &a;
pb = &b;      /*e os associa aos endereços de memória de a e b usando o operador & */ 
  
*pa = *pb * 2;  /* o valor apontado por pa (ou seja, o valor armazenado no endereço de memória apontado por pa, que é a) é atualizado para o valor apontado por pb (que é b) multiplicado por 2, ou seja, 40. */
  
printf("%d,%d\n",a,b);
return 0;
}