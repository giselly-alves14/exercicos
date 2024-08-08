#include<stdio.h>
int main (){

//Entrar com a idade de várias pessoas e imprimir o total de pessoas com menos de 21 anos e o total de pessoas com mais de 50 anos.
//coletei apenas 10 idades
	int idade; 
	int total_21anos=0;
	int total_50anos=0;
 
	for (int cont=0;cont<=10;cont++){
		printf("insira sua idade");
		scanf("%d", &idade);
		
		if (idade<21){
			total_21anos++;
		}
		if(idade>50){
			total_50anos++;
	}
	printf("numero de pessoas menores de 21 anos: %d\n", total_21anos);
printf("numero de pessoas maioroes de 50 anos: %d\n", total_50anos);
	}

	return 0;
}
