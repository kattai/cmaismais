#include <stdio.h>
#include <iostream>

using namespace std;

int eh_primo(int num){
    if(num <= 1) return 0;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int numero; 

    printf("digite um numero: ");
    scanf("%d", &numero);

    if(eh_primo(numero) == 1){
        printf("e primo");
    }else{
        printf("nao e primo");
    }

    getchar();
    return 0;
}