//Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido 
//pelo usu�rio.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int i, contador;
    float H, numero;
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Informe um n�mero como o denominador m�ximo: ");
    scanf("%f", &numero);
H = 0;
    if(numero == 0 || numero <= 0){
    	printf("N�mero invalido! Tente novamente:\n");
	}else{ (numero != 0);
		for(contador = 1; contador <= numero; contador++){
	       H = H + (1/contador);}
}
}while(numero <= 0);
	printf("O resultado de H = %f �: %.2f", numero, H);	

return 0;	
}
