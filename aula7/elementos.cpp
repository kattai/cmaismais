#include <stdio.h>
#include <iostream>

using namespace std;

void print_vetores(int vetor1[2], int vetor2[2]){
    int i = 0;

    for (i; i <= 2; i++){
        printf("os valores de vetor1 sao: ")
        printf("%d", vetor1[i]);
    }

    for (i; i <= 2; i++){
        printf("os valores de vetor2 sao: ")
        printf("%d", vetor2[i]);
    }
}