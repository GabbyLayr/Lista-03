//Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que 
//seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:	
	int i, contador = 1, numeros[100], total;
	setlocale(LC_ALL, "portuguese");
//Entrada:
    for (contador = 0; contador < 5; contador++){
    	printf("\n%d. Digite um n�mero: ", ++i);
    	scanf("%d", &numeros[i]);
    	total++;
    if(numeros <= 0){
    	printf("\nPrograma encerrado!");
	}
}
//Sa�da:
printf("\n");
	for (contador = 0; contador <= 5; contador++){
	   printf("N�mero informado: %d\n", numeros[contador]);
	 }
	printf("\nN�meros informados no total: %d", total);
	
return 0;
}
