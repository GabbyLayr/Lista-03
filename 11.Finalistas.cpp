//Competi��o de piadas:

#include<stdio.h> //biblioteca para entrada e sa�da: printf e scanf
#include<locale.h> //biblioteca para acentua��o gr�fica
#include<ctype.h> //biblioteca para converter letras min�sculas e letras mai�sculas: toupper e tolower

int main(){
//declara��o de vari�veis:	
	char finalista;
	int i, contador, juizes, nota, finalista1[50], finalista2[50], finalista3[50];
	int nomef1[20], nomef2[20], nomef3[20], soma1, soma2, soma3;
	setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("--Bem-Vindos a competi�� de piadas--\n");
	printf("\nNos informe os nomes dos 3 finalistas:\n");
	
	printf("\nNome do finalista 1: ");
	scanf("%s", &nomef1);
	printf("Nome do finalista 2: ");
	scanf("%s", &nomef2);
	printf("Nome do finalista 3: ");
	scanf("%s", &nomef3);
	
	printf("\nNos informe quantos ju�zes participar�o: ");
	scanf("%d", &juizes);
	  for(contador = 0; contador < juizes; contador++){
	  	printf("\nJu�z %d nos informe as notas: ", ++i);
	  	printf("\nCandidato 1: ");
	  	scanf("%d", &finalista1[i]);
	  	soma1 += finalista1[i];
	  	printf("\nCandidato 2: ");
	  	scanf("%d", &finalista2[i]);
	  	soma2 += finalista2[i];
	  	printf("\nCandidato 3: ");
	  	scanf("%d", &finalista3[i]);
	  	soma3 += finalista3[i];}

	printf("\nPontua��o total do candidato %s: %d", nomef1, soma1);
	printf("\nPontua��o total do candidato %s: %d", nomef2, soma2);
	printf("\nPontua��o total do candidato %s: %d", nomef3, soma3);
	
	return 0;	
}
