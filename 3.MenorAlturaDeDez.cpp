//Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repeti��o enquanto.
//usar vetor e matriz
#include<stdio.h> 
#include<math.h> 
#include<locale.h> 

int main(){
//Declara��o de vari�veis:
	int i, contador, numero[10], menor;
    menor = numero[0];
    setlocale(LC_ALL, "portuguese");
//Entrada:
    for (contador = 1; contador <= 10; contador++){
      printf("Digite a altura %d: ", ++i);
      scanf("%d",&numero[contador]);}
	for (contador = 1; contador <= 5; contador++){
      if (numero[contador] < menor)
        menor = numero[contador];}
//Sa�da
    printf("A menor altura � da %d� pessoa!",menor);

 return 0;
}

