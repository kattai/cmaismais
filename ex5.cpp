#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

float calcula_imc(float kg, float altura){
  float imc = kg/pow(altura, 2);

  if (imc < 18.5)
      return 0;  
  else if (imc <= 24.9)
      return 1; 
  else if (imc <= 29.9)
      return 2;  
  else
      return 3; 
}

void imprima_imc(float kg, float altura) {
  int categoria = calcula_imc(kg, altura);
  float valor_imc = calcula_imc(kg, altura);
  
  printf("IMC: %.2f\n", valor_imc);
  printf("Classificacao: ");
  
  switch(categoria) {
      case 0:
          printf("Magreza\n");
          break;
      case 1:
          printf("Saudavel\n");
          break;
      case 2:
          printf("Sobrepeso\n");
          break;
      case 3:
          printf("Obesidade\n");
          break;
  }
}

int main(){
  float kg, altura;
    
  printf("Digite o peso em kg: ");
  scanf("%f", &kg);
  
  printf("Digite a altura em metros: ");
  scanf("%f", &altura);
  
  imprima_imc(kg, altura);
  
  getchar();
  getchar();
  return 0;
}