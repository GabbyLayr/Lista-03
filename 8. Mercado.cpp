//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes 
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada 
//produto e calcule e escreva a identificação e o novo preço após o aumento. 
//Considere as seguintes situações:
//a) o mercador informa o número de produtos que possui antes de entrar com o preço 
//dos produtos
//b) o mercador informa produto a produto e você deve perguntar se tem mais algum 
//produto a ser calculado o aumento
//c) o preço do último produto fornecido pelo mercador é -1

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
	int produtosTotal, i, contador;
	float preco, novoPreco;
	char id[50], opcao;
	setlocale(LC_ALL, "Portuguese");
//Entrada: 
do{
	system("cls");
	printf("Aumento dos produtos\n");
	printf("Digite a quantidade de produtos que será calculado: ");
	scanf("%d", &produtosTotal);
	fflush(stdin);
	
	for (contador = 1; contador <= produtosTotal ; contador++){
		printf("\n%d. Informe o produto: ", ++i);
		fgets(id, 50, stdin);
		fflush(stdin);
			printf("Informe o preço atual: ");
			  scanf("%f", &preco);
			    fflush(stdin);
                  novoPreco = preco * 1.1;
			        printf("Novo preço: %.2f\n", novoPreco);
    }
    printf("\nDeseja calcular o aumento de um novo produto?\n");
	printf("Digite S. para confirmar ou N. para encerrar essa sessão: ");
	scanf("%c", &opcao);
	fflush(stdin);
	opcao = toupper(opcao);
	if(opcao == 'N'){
		printf("Sessão encerrada!");}
}while (opcao == 'S');
					
return 0;	
}

