#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int numero_digitado;
    int *vetor = NULL;
    int tamanho_vetor = 0;

    while(1){
        printf("digite um numero (ou -1 para finalizar): ");
        scanf("%d", &numero_digitado);

        if(numero_digitado == -1)
            break;

        tamanho_vetor++;

        int *temp_vetor = (int*)realloc(vetor, tamanho_vetor * sizeof(int));
        if(vetor == NULL){
            printf("erro ao alocar memoria");
            free(vetor);
            return 1;
        }

        vetor = temp_vetor;
        vetor[tamanho_vetor - 1] = numero_digitado;
        printf("numero %d adicionado ao vetor", numero_digitado);
    }

    if(tamanho_vetor > 0){
        printf("valores armazenados: ");
        for(int i = 0; i < tamanho_vetor; i++){
            printf("%d", vetor[i]);
        }
        printf("\n");
    }else{
        printf("nenhum valor adicionado");
    }

    free(v);
    getchar();
    return 0;
}