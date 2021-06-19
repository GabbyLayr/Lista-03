//Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média 
//das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os 
//resultados solicitados quando for fornecida uma nota negativa.

#include<stdio.h> //Biblioteca para entrada e saída: printf e scanf
#include<locale.h> //Biblioteca para acentuação gráfica
#include<math.h> //Biblioteca para realizar operações matemáticas
#include<ctype.h>

int main(){
//Declaração de variáveis:
	int contador, i = 0, quantidadeAlunos, notaAlunas[100], notaAlunos[100];
	int feminino[100], masculino[100], notas[100], somaF = 0, somaM = 0;
	float mediaAlunos[100], mediaAlunas[100];
	char sexo[100];
	setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Declaração de notas dos alunos\n");
	printf("Quantos alunos deseja declarar notas? ");
	scanf("%d", &quantidadeAlunos);
//Processamento:
for (contador = 0; contador < quantidadeAlunos; contador++){
	printf("\nDigite a nota do aluno %d: ", ++i);
	scanf("%d", &notas[i]);
do{
	printf("Diga o sexo sendo F. para feminino e M. para masculino: ");
	scanf("%s", &sexo[i]);
	fflush(stdin); 
	sexo[i] = toupper(sexo[i]);
	
	if(sexo[i] == 'F'){ 
		feminino[i]++;
		  notaAlunas[i] = notaAlunas[i] + notas[i];
	        }else if(sexo[i] == 'M'){
		      masculino[i]++;
		        notaAlunos[i] = notaAlunos[i] + notas[i];
				  }else{(sexo[i] != 'F' && sexo[i] != 'M');
		printf("Inválido! tente novamente:\n");}
		
}while(sexo[i] != 'F'  && sexo[i] != 'M');
}
    
    if(feminino[i] == 0){
      mediaAlunas[i] = 0;
	    }else{ 
	       mediaAlunas[i] = notaAlunas[i] / feminino[i];}
		  
	if(masculino[i] == 0){
	  mediaAlunos[i] = 0;
	    }else{
	       mediaAlunos[i] = notaAlunos[i] / masculino[i];}
	i++;
//Saída:
    if(notas[i] < 0){
    for (contador = 0; contador <= quantidadeAlunos; contador++){
    printf("\nNota: %d - Sexo: %s ", notas[i], sexo[i]);}
}
    
    printf("\nMédia de notas das alunas: %.2f", mediaAlunas[i]);
    printf("\nMédia de nota dos alunos: %.2f", mediaAlunos[i]);

return 0;	  	
}
