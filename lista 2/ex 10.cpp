#include<stdio.h>
#include<math.h>

//||bônus salário||

int main () {
	
	float salario,bonus,anos,salariob;
	
	printf("insira seu salário atual para obter seu salario + bonus\n");
	scanf("%f", &salario);
	
	printf("insira seus anos trabalahdos na empresa\n");
	scanf("%f", &anos);
	
	if (anos<=5) {
		bonus= salario*10/100;
		salariob=bonus+salario;
		printf("seu salário é %f\n", salariob);
		
	}else{
		if(anos>=6, anos<=10){
			bonus= salario*15/100;
			salariob=bonus+salario;
			printf("seu salario é %f\n", salariob);
		}else{ 
		 if(anos>10){
		 	bonus= salario*20/100;
		 	salariob=bonus+salario;
		 	printf("seu salário é %f\n", salariob);
		 } else{
		 }
		}
	}
	
	
	
	
	return 0;
}
