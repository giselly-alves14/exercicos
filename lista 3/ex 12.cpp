#include<stdio.h>

int main () {
	float altura;
	char problemas; // problemas cardiacos
	
	printf("insira sua altura");
	scanf("%f", &altura);
	
	while (getchar() != '\n');
	printf("voce possui problemas cardiacos?");
problemas=getchar();
	
	if((altura>=1.40 && altura<=2.05) && (problemas=='nao')){
		printf("acesso permitido");
		
	}else if (problemas='sim'){
		printf("acesso negado");
	}
	
	
	
	
	
	
	
	return 0;
}
