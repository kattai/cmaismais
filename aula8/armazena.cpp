#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    int *vetor;

    printf("quantos numeros serao armazenados: ");
    scanf("%d", n);

    if (n <= 0){
        printf("informe um numero positivo");
        return 1;
    }
    
    vetor = (int *)malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("erro ao alocar memoria");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("valor do vetor %d", i);
        scanf("%d", vetor[i]);
    }

    printf("resultado: ");
    for(int i = 0; i < n; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    free(v);

    getchar();
    return 0;
}