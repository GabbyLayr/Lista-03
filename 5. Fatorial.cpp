//Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é 
//fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.

#include<stdio.h> 
#include<locale.h> 
#include <stdlib.h> 
#include<math.h> 

int main(){
//Declaração de variáveis:	
	int numero, fat = 0, contador = 0, i;
	setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Digite o número para cálculo do fatórial: ");
	scanf("%d", &numero);
	
	for (fat = 1; numero > 1; numero = numero - 1)
	fat = fat * numero; 
	
//Saída:
	printf("O fatorial do número %d é: %d", numero, fat);
	
	return 0;	
}
