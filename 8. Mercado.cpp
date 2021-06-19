//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes 
//algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada 
//produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento. 
//Considere as seguintes situa��es:
//a) o mercador informa o n�mero de produtos que possui antes de entrar com o pre�o 
//dos produtos
//b) o mercador informa produto a produto e voc� deve perguntar se tem mais algum 
//produto a ser calculado o aumento
//c) o pre�o do �ltimo produto fornecido pelo mercador � -1

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
	int produtosTotal, i, contador;
	float preco, novoPreco;
	char id[50], opcao;
	setlocale(LC_ALL, "Portuguese");
//Entrada: 
do{
	system("cls");
	printf("Aumento dos produtos\n");
	printf("Digite a quantidade de produtos que ser� calculado: ");
	scanf("%d", &produtosTotal);
	fflush(stdin);
	
	for (contador = 1; contador <= produtosTotal ; contador++){
		printf("\n%d. Informe o produto: ", ++i);
		fgets(id, 50, stdin);
		fflush(stdin);
			printf("Informe o pre�o atual: ");
			  scanf("%f", &preco);
			    fflush(stdin);
                  novoPreco = preco * 1.1;
			        printf("Novo pre�o: %.2f\n", novoPreco);
    }
    printf("\nDeseja calcular o aumento de um novo produto?\n");
	printf("Digite S. para confirmar ou N. para encerrar essa sess�o: ");
	scanf("%c", &opcao);
	fflush(stdin);
	opcao = toupper(opcao);
	if(opcao == 'N'){
		printf("Sess�o encerrada!");}
}while (opcao == 'S');
					
return 0;	
}

