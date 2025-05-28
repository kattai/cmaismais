#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char palavra[100];

    printf("digite uma palavra: ");
    scanf("%s", &palavra);

    printf("a palavra %s comeca com a letra %c", palavra, palavra[0]);

    getchar();
    return 0;
}