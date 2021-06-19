//Faça um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repetição enquanto.
//usar vetor e matriz
#include<stdio.h> 
#include<math.h> 
#include<locale.h> 

int main(){
//Declaração de variáveis:
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
//Saída
    printf("A menor altura é da %d° pessoa!",menor);

 return 0;
}

