//Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo
//outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)

#include<stdio.h> //bibliote de entrada e saída: printf e scanf
#include<math.h> //biblioteca para operações matemáticas
#include<locale.h> //bibliotéca para acentuação gráfica

int main (void){
//declaração de variáveis:
	int numero1, numero2, num1, num2, contador = 0, soma = 0;
	setlocale (LC_ALL, "portuguese");
//entrda:
	printf("Digite o 1° número: ");
	scanf("%d", &numero1);
	printf("\nDigite o 2° número: ");
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
    printf("A multiplicação %d por %d é = %d", numero1, numero2, soma);

return 0;	
}
