//Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo
//outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)

#include<stdio.h> //bibliote de entrada e sa�da: printf e scanf
#include<math.h> //biblioteca para opera��es matem�ticas
#include<locale.h> //bibliot�ca para acentua��o gr�fica

int main (void){
//declara��o de vari�veis:
	int numero1, numero2, num1, num2, contador = 0, soma = 0;
	setlocale (LC_ALL, "portuguese");
//entrda:
	printf("Digite o 1� n�mero: ");
	scanf("%d", &numero1);
	printf("\nDigite o 2� n�mero: ");
	scanf("%d", &numero2);
	if(numero1 < numero2){
	  num1 = numero1;
	  num2 = numero2;
	}else{
	  num1 = numero2;
	  num2 = numero1;		
} //final if-else
//processamento:
    while (contador != num1){
    	soma = soma + num2;
    	contador = contador + 1;
	}
    printf("A multiplica��o %d por %d � = %d", numero1, numero2, soma);

return 0;	
}
