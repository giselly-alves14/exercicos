#include<stdio.h>

int main () {
	float salario, bonus;
	int anos;
	char faltas;
	
	printf("insira seu salario");
	scanf("%f", &salario);
	
	printf("insira seus anos trabalhados");
	scanf("%d", &anos);
	
	while (getchar() !='\n');
	printf("voce possui alguma falta? (tecle s/n)");
	scanf("%c", &faltas);
	
	if((anos<=5) && (faltas=='s')) {
		bonus=salario*0.10;
		
	}	else if((anos>5) && (faltas=='s')){
		bonus=salario*0.20;

	} else if((anos>5) && (faltas=='n')){
		bonus=salario*0.25;
		
	} else if((anos<=5) && (faltas=='n')){
		bonus=salario*0.15;


	}
	
	printf("seu bonus é: %.2f", bonus);
	
	
	return 0;
}
