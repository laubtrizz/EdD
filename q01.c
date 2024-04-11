#include<stdio.h>
#include<locale.h>

//Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo, negativo ou neutro.

int main(){
int v;
printf("Informe um valor inteiro: \n");
scanf("%d", &v);

if( v > 0){
    printf("O número %d é positivo!\n", v);
    }
else if(v < 0){
printf("O número %d é negativo!\n", v);
    }
else{
printf("O número %d é neutro!\n", v);
    }
return(0);
}