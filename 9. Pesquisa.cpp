//Fazer um algoritmo que determine e escreva:
//a) a maior idade dos habitantes pesquisados;
//b) a porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos 
//inclusive e que tenham olhos verdes e cabelos loiro

#include<stdio.h> 
#include<locale.h> 
#include <stdlib.h> 
#include<math.h> 
#include<ctype.h>
#include <stdlib.h>

int main (){
//Declara��o de vari�veis:
	int pessoas, i, contador,olhos[50], cabelos[50], idade[50], especificacoes;
	char sexo[50];
	setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Pesquisa sobre caracter�sticas f�sicas:\n");
	printf("Responda a esse question�rio para fazer parte da nossa pesquisa!\n");
	printf("\nQuantas pessoas desejam fazer as pesquisas: ");
	scanf("%d", &pessoas);
system("cls");

	for(contador = 0; contador < pessoas; contador++){
	printf("%d. Diga o sexo sendo F. para feminino e M. para masculino:\n >", ++i);
	scanf("%s", &sexo[i]);
	fflush(stdin); 
	sexo[i] = toupper(sexo[i]);

	printf("\nNos informe a cor dos seus olhos:\n");
	printf("1.Azuis\n2.Verdes\n3.Castanhos\n4.Pretos\n");
	printf("Digite sua op��o: ");
	scanf("%d", &olhos[i]);
	
	printf("\nNos informe a cor dos seus cabelos:\n");
	printf("1. Loiros\n2. Castanhos\n3. Pretos\n");
	printf("Digite sua op��o: ");
	scanf("%d", &cabelos[i]);
	
	printf("\nNos informe sua idade: ");
	scanf("%d", &idade[i]);
system("cls");}
//Sa�da:
	if(sexo[i] == 'F' && idade[i] >= 18 || idade[i] <= 35 && olhos[i] == 2 && cabelos[i] == 1){
		especificacoes++;
		printf("\nNossa pesquisa aponta que h� %d pessoas que atenda as seguintes especifica��es:\n", especificacoes);
		printf("A. Sexo Feminino\nB. Idade entre 18 e 35 anos\nC. Olhos Verdes\nD. Cabelos Loiros");
	}else{
		printf("\nNossa pesquisa aponta que n�o h� nenhuma pessoa que atenda as seguintes especifica��es:\n", especificacoes);
		printf("A. Sexo Feminino\nB. Idade entre 18 e 35 anos\nC. Olhos Verdes\nD. Cabelos Loiros");
	}
	
	
	
	
	
	
}
