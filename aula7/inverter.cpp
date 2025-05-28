#include <stdio.h>
#include <iostream>

using namespace std;

void inverter(*array, int tamanho){
    int *inicio = array;
    int *fim = array + tamanho - 1;

    while(inicio < fim){
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}