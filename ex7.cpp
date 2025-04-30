#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void calcular_circulo(float raio, float *perimetro, float *area){
  *perimetro = 2.0 * M_PI * raio;
  *area = M_PI * raio * raio;
}

int main(){
  float raio, perimetro, area;

  printf("digite o raio do circulo: ");
  scanf("%f", &raio);

  calcular_circulo(raio, &perimetro, &area);

  printf("perimetro do circulo: %.2f\n", perimetro);
  printf("area do circulo: %.2f\n", area);

  getchar();
  getchar();
  return 0;
};