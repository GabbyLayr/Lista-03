//Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que 
//seja lido um número negativo e mostrar a quantidade total de números lidos.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:	
	int i, contador = 1, numeros[100], total;
	setlocale(LC_ALL, "portuguese");
//Entrada:
    for (contador = 0; contador < 5; contador++){
    	printf("\n%d. Digite um número: ", ++i);
    	scanf("%d", &numeros[i]);
    	total++;
    if(numeros <= 0){
    	printf("\nPrograma encerrado!");
	}
}
//Saída:
printf("\n");
	for (contador = 0; contador <= 5; contador++){
	   printf("Número informado: %d\n", numeros[contador]);
	 }
	printf("\nNúmeros informados no total: %d", total);
	
return 0;
}
