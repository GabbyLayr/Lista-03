//Competição de piadas:

#include<stdio.h> //biblioteca para entrada e saída: printf e scanf
#include<locale.h> //biblioteca para acentuação gráfica
#include<ctype.h> //biblioteca para converter letras minúsculas e letras maiúsculas: toupper e tolower

int main(){
//declaração de variáveis:	
	char finalista;
	int i, contador, juizes, nota, finalista1[50], finalista2[50], finalista3[50];
	int nomef1[20], nomef2[20], nomef3[20], soma1, soma2, soma3;
	setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("--Bem-Vindos a competiçõ de piadas--\n");
	printf("\nNos informe os nomes dos 3 finalistas:\n");
	
	printf("\nNome do finalista 1: ");
	scanf("%s", &nomef1);
	printf("Nome do finalista 2: ");
	scanf("%s", &nomef2);
	printf("Nome do finalista 3: ");
	scanf("%s", &nomef3);
	
	printf("\nNos informe quantos juízes participarão: ");
	scanf("%d", &juizes);
	  for(contador = 0; contador < juizes; contador++){
	  	printf("\nJuíz %d nos informe as notas: ", ++i);
	  	printf("\nCandidato 1: ");
	  	scanf("%d", &finalista1[i]);
	  	soma1 += finalista1[i];
	  	printf("\nCandidato 2: ");
	  	scanf("%d", &finalista2[i]);
	  	soma2 += finalista2[i];
	  	printf("\nCandidato 3: ");
	  	scanf("%d", &finalista3[i]);
	  	soma3 += finalista3[i];}

	printf("\nPontuação total do candidato %s: %d", nomef1, soma1);
	printf("\nPontuação total do candidato %s: %d", nomef2, soma2);
	printf("\nPontuação total do candidato %s: %d", nomef3, soma3);
	
	return 0;	
}
