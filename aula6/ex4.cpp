#include <stdio.h>
#include <iostream>

double potencia(double base, int expoente){
  if(expoente == 0)
    return 1.0;

  if(expoente == 1)
    return base;

  return base * potencia(base, expoente - 1);
}

int main(){
  double base;
  int expoente;

  printf("digite a base: ");
  scanf("%lf", &base);

  printf("digite o expoente (número positivo): ");
  scanf("%d", &expoente);

  if (expoente < 0)
    printf("por favor, digite apenas expoentes positivos ou zero. \n");
  else{
    double resultado = potencia(base, expoente);
    printf("%2.f elevado a %d = %.6f\n", base, expoente, resultado);
  }

  getchar();
  return 0;
}