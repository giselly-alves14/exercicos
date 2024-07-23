#include<stdio.h>
int main () {
	 float salario,bonus, anos;
	 char faltas[4];
	
	printf("insira seu salario\n");
	scanf("%f", & salario);
	
	printf("insira seus anos trabalhados na empresa\n");
	scanf("%f", anos);
	
	//while getchar pois mudei a variavel para um caracter
		while ( getchar () != '\n');

	printf("voce possui alguma falta?");
	fgets(faltas,sizeof(faltas),stdin);

	if((anos<=5) && (strcmp(faltas, "sim")==0)){
		bonus=salario*0.10;
		
	} else if((anos>5) && (strcmp(faltas, "nao")==0)){
		bonus=salario*0.25;
		
	} else if((anos<=5) && (strcmp(faltas, "nao")==0)){
		bonus=salario*0.15;
		
	} else if((anos>5) && (strcmp(faltas,"sim")==0)){
		bonus=salario*0.20;
		
	} else{
		printf("nao foi possivel calcular seu bonus");
		
		
	}
	printf("seu bonus é: %.3f \n", bonus);
	
	
	
	
	
	
	
	return 0;
}
