#include <stdio.h>
#include <iostream>

int soma_recursiva(int n){
  if (n == 1)
    return 1;
  else
    return n + soma_recursiva(n - 1);
}

int main(){
  int n;

  printf("digite um valor para n: ");
  scanf("%d", &n);

  if (n <= 0)
    printf("por favor, digite um número positivo.\n");
  else{
    int resultado = soma_recursiva(n);
    printf("a soma de 1 até %d e: %d", n, resultado);
  }

  getchar();
  return 0;

}