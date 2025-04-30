#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float distancia(float x1, float y1, float x2, float y2){
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(){
  float x1, y1, x2, y2;

  printf("digite as coordenadas do primeiro ponto (x1 y1): ");
  scanf("%f %f", &x1, &y1);

  printf("digite as coordenadas do segundo ponto (x2 y2): ");
  scanf("%f %f", &x2, &y2);

  float dist = distancia(x1, y1, x2, y2);
  printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n", 
    x1, y1, x2, y2, dist);

  getchar();
  getchar();
  return 0;
}