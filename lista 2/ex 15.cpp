#include<stdio.h>

//classificador de numeros

int main () {
	
	float numero;
	printf("insira um numero qualquer");
	scanf("%f", &numero);
	
	if(numero=0){
		printf("numero equivalente a 0");
	} else{ 
	
	  if(numero>0){
		printf("numero positivo");
	} else{
	printf("numero negativo");
		}
	}
	
	
	

	
	
	
	
	return 0;
}
