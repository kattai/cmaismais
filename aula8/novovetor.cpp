#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int *filtrar_pares(int *V, int n, int *tamanho_S){
    if(V == NULL || n <= 0 || tamanho_S == NULL){
        if(tamanho_S != NULL){
            *tamanho_S = 0;
        }
        return NULL;
    }

    int contador_pares = 0;
    for(int i = 0; i < n; i++){
        if(V[i] % 2 == 0){
            contador_pares++;
        }
    }

    if(contador_pares == 0){
        *tamanho_S = 0;
        return NULL;
    }

    int *S = (int*)malloc(contador_pares * sizeof(int));
    if(S == NULL){
        printf("erro!")
        *tamanho_S = 0;
        return NULL;
    }

    int indice_S = 0;
    for(int i = 0; i < n; i++){
        if(V[i] % 2 == 0){
            S[indice_S] = V[i];
            indice_S++;
        }
    }
    *tamanho_S = contador_pares;
    return S;
}