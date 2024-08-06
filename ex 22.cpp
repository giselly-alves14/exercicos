#include<stdio.h>
int main (){
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
