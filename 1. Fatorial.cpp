//Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA,
//baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)

#include<stdio.h> 
#include<math.h> 
#include<locale.h> 
int main(){
//declaração de variáveis:	
	int numero, fat; 
	setlocale (LC_ALL, "portuguese");
//entrada:
	printf("Digite um número para realizar o cálculo: \n");
	scanf("%d", &numero);
//processamento:
	for (fat = 1; numero > 1; numero = numero - 1)
	fat = fat * numero;
//saída:
	printf("Fatorial = %d", fat);
	
   return 0;	
}
