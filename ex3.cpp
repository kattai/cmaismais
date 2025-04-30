#include <stdio.h>
#include <iostream>

using namespace std;

float celsius_para_fahrenheit(float celcius){
    return (celcius * 9.0f/5.0f) + 32.0f;
}

int main(){
    printf("%d", celsius_para_fahrenheit(32));
    getchar();
    return 0;
}