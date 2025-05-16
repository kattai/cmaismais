#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int contar_digitos(int numero){
  if (numero == 0)
    return 0;

  return 1 + contar_digitos(numero / 10);
}

int main(){
  int numero;

  printf("digite um numero inteiro: ");
  scanf("%d", &numero);

  if(numero == 0)
    printf("o numero 0 tem 1 digito.\n");
  else{
    int num_absoluto = abs(numero);
    int qtd_digitos = contar_digitos(num_absoluto);

    printf("o numero %d tem %d digito(s), \n", numero, qtd_digitos);
  }

  getchar();
  return 0;
}