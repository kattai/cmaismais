#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int inverter_numero(int num){
  int invertido = 0;

  while(num > 0){
    invertido = invertido * 10 + num % 10;
    num = num / 10;
  }

  return invertido;
}

int eh_palindromo(int num){
  if(num < 0)
    return 0;

  if(num == inverter_numero(num))
    return 1;
  else
    return 0;
}

int main(){
  int numero;

  printf("digite um numero inteiro: ");
  scanf("%d", &numero);

  if(eh_palindromo(numero))
    printf("%d e um palindromo.\n", numero);
  else
    printf("%d nao e um palindromo.\n", numero);

  getchar();
  getchar();

  return 0;
}