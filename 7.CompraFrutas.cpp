// apresenta as compras de frutas efetuadas por usuário:
//Corrigir repetição de código

#include<stdio.h> //biblioteca para entrada e saída: printf e scanf
#include<locale.h> //biblioteca para acentuação gráfica
#include<ctype.h> //biblioteca para converter letras minúsculas e letras maiúsculas: toupper e tolower

int main(){
//declaração de variáveis:
	int frutas;
	char outraSessao;
	setlocale (LC_ALL, "portuguese");
//Entrada:
	printf("Seja bem-vendo ao nosso mercado!\n Escolha uma opção de compra:\n");
	printf("\n1. Abacaxi\n2. Maça\n3. Pera");
	printf("\nDigite sua resposta: ");
	scanf("%d", &frutas);
//processamento:
	switch (frutas){
		case 1: printf("Ótimo! Você escolheu: Abacaxi"); break;
		case 2: printf("Ótimo! Você escolheu: Maça"); break;
		case 3: printf("Ótimo! Você escolheu: Pera"); break;
		default: printf("Inválido!"); break;
  }//final switch
      do{
    	printf("\nDeseja realizar outra sessão?[S. para sim e N. para não]\n");
    	scanf("%c", &outraSessao);
    	outraSessao = toupper(outraSessao);
    	if(outraSessao == 'N'){ //se sexo for verdadeiro para a condição F.feminino executar 
		  printf("Sessão finalizada!\n");
		        }//final do if-else

}while (outraSessao == 'S');
    return 0;	
}
