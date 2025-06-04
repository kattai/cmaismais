#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("o tamanho do vetor deve ser um numero positivo");
        return 1;
    }

    int *vetor = (int *)malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("erro ao alocar memoria");
        return 1;
    }

    for(int i = 0; i < n; i++){
        vetor[i] = i +1;
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