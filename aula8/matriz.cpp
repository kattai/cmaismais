#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int l = 3;
    int c = 3;
    int len_total = l * c;
    int *vetor_matriz;

    vetor_matriz = (int*)calloc(len_total, sizeof(int));

    if(vetor_matriz == NULL){
        printf("erro!");
        return 1;
    }

    if(vetor_matriz != NULL){
        for(int i = 0; i < len_total; i++){
            *vetor_matriz[i] = 0;
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            int indice = i * c + j;
            printf("%d", vetor_matriz[indice]);
        }
        printf("\n");
    }

    free(vetor_matriz);
    getchar();
    return 0;
}