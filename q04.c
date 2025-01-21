#include<stdio.h>

/*Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de
uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia.
Sabendo disso, crie um programa que solicita e lê a quantidade de maças desejadas,
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos anteriormente.*/

int main(){
    
    float m;
    printf("Informe a quantidade de maças comparadas: \n");
    scanf("%f", &m);
    if(m >= 12){
        printf("o valor a ser pago e %.2f", m * 1.10);
    }
    else{
        printf("o valor a ser pago e %.2f", m * 1.30);
    }
    return 0;
}
