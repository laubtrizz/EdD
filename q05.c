#include<stdio.h>

//Elabore um algoritmo que exibe somente os números pares existentes no intervalo 
//de 10 (inclusive) a 100 (inclusive).

int main (){
int n;
    printf("Numeros no intervalo de 10 a 100:\n");
    for(n = 10; n <= 100; n++ ){
        if (n % 2 == 0){
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}