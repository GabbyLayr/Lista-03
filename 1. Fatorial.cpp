//Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A,
//baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)

#include<stdio.h> 
#include<math.h> 
#include<locale.h> 
int main(){
//declara��o de vari�veis:	
	int numero, fat; 
	setlocale (LC_ALL, "portuguese");
//entrada:
	printf("Digite um n�mero para realizar o c�lculo: \n");
	scanf("%d", &numero);
//processamento:
	for (fat = 1; numero > 1; numero = numero - 1)
	fat = fat * numero;
//sa�da:
	printf("Fatorial = %d", fat);
	
   return 0;	
}
