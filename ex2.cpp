#include <stdio.h>
#include <iostream>

using namespace std;

float a = 2.0f;
float b = 3.0f;
float c = 4.0f;

float quadratica(float x){
    return (a * x * x + b * x + c); 
}

int main(){
    int num;
    scanf("%d", num);

    printf("%d", quadratica(num));

    getchar();
    return 0;
}