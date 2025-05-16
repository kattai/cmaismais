#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

int main(){
  srand(time(NULL));

  int random_num = (rand() % 11) + 2;

  printf("numero aleatorio entre 2 e 12 e: %d\n", random_num);

  getchar();
  return 0;
}