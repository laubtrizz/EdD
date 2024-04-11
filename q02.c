#include<stdio.h>

//Crie um programa que solicita e lê dois números inteiros (numerador e denominador)
//e verifica se a divisão é exata. Se for, exiba a mensagem: “É divisível!”.
//Caso contrário, exiba a mensagem: “Não é divisível!”.
//Obs.: não esqueça que a divisão só deve ser realizada, caso o denominador seja diferente de zero.
//Caso contrário, o programa deve exibir uma mensagem informando que a divisão é indefinida.

int main(){
    int n, d;
    printf("Informe um numerador: \n");
    scanf("%d", &n);
    printf("Informe um denominador: \n");
    scanf("%d", &d);
    if(d == 0){
        printf("Divisao indefinida.");
    }
    else if(n % d == 0){
        printf("E divisivel!");
    }
    else{
        printf("Nao e divisivel!");
    }
    return 0;
}