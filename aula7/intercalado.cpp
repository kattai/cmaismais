#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A[5], B[5];
    int i;

    for(i = 0; i <= 5; i++){
        printf("digite o valor %d de A: ", i);
        scanf("%d", &A[i]);

        printf("digite o valor %d de B: ", i);
        scanf("%d", &B[i]);
    }

    for(i = 0; i <= 5; i++){
        printf("%d\n", A[i]);
        printf("%d\n", B[i]);
    }
    
    getchar();
    return 0;
}