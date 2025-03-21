#include <stdio.h>

int main(){
/*
Soma (+)
Multiplicação (*)
Divisão (/)
*/

int numero1, numero2;
int soma, multiplicacao, divisao;

printf("Entre com o numero 1: \n");
scanf("%d", &numero1);
printf("Entre com o numero 2: \n");
scanf("%d", &numero2);

//operação soma
soma = numero1 + numero2;

//operação multiplicação
multiplicacao = numero1 * numero2;

//operação divisão
divisao = numero1 / numero2;

printf("A Soma é: %d\n", soma);
printf("A Multiplicação é: %d\n", multiplicacao);
printf("A Divisão é: %d\n", divisao);

}