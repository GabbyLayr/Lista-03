//Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N � 
//fornecido pelo usu�rio. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...fa�a.

#include<stdio.h> 
#include<locale.h> 
#include <stdlib.h> 
#include<math.h> 

int main(){
//Declara��o de vari�veis:	
	int numero, fat = 0, contador = 0, i;
	setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Digite o n�mero para c�lculo do fat�rial: ");
	scanf("%d", &numero);
	
	for (fat = 1; numero > 1; numero = numero - 1)
	fat = fat * numero; 
	
//Sa�da:
	printf("O fatorial do n�mero %d �: %d", numero, fat);
	
	return 0;	
}
