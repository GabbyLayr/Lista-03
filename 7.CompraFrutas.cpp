// apresenta as compras de frutas efetuadas por usu�rio:
//Corrigir repeti��o de c�digo

#include<stdio.h> //biblioteca para entrada e sa�da: printf e scanf
#include<locale.h> //biblioteca para acentua��o gr�fica
#include<ctype.h> //biblioteca para converter letras min�sculas e letras mai�sculas: toupper e tolower

int main(){
//declara��o de vari�veis:
	int frutas;
	char outraSessao;
	setlocale (LC_ALL, "portuguese");
//Entrada:
	printf("Seja bem-vendo ao nosso mercado!\n Escolha uma op��o de compra:\n");
	printf("\n1. Abacaxi\n2. Ma�a\n3. Pera");
	printf("\nDigite sua resposta: ");
	scanf("%d", &frutas);
//processamento:
	switch (frutas){
		case 1: printf("�timo! Voc� escolheu: Abacaxi"); break;
		case 2: printf("�timo! Voc� escolheu: Ma�a"); break;
		case 3: printf("�timo! Voc� escolheu: Pera"); break;
		default: printf("Inv�lido!"); break;
  }//final switch
      do{
    	printf("\nDeseja realizar outra sess�o?[S. para sim e N. para n�o]\n");
    	scanf("%c", &outraSessao);
    	outraSessao = toupper(outraSessao);
    	if(outraSessao == 'N'){ //se sexo for verdadeiro para a condi��o F.feminino executar 
		  printf("Sess�o finalizada!\n");
		        }//final do if-else

}while (outraSessao == 'S');
    return 0;	
}
