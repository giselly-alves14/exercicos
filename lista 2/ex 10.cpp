#include<stdio.h>
#include<math.h>

//||b�nus sal�rio||

int main () {
	
	float salario,bonus,anos,salariob;
	
	printf("insira seu sal�rio atual para obter seu salario + bonus\n");
	scanf("%f", &salario);
	
	printf("insira seus anos trabalahdos na empresa\n");
	scanf("%f", &anos);
	
	if (anos<=5) {
		bonus= salario*10/100;
		salariob=bonus+salario;
		printf("seu sal�rio � %f\n", salariob);
		
	}else{
		if(anos>=6, anos<=10){
			bonus= salario*15/100;
			salariob=bonus+salario;
			printf("seu salario � %f\n", salariob);
		}else{ 
		 if(anos>10){
		 	bonus= salario*20/100;
		 	salariob=bonus+salario;
		 	printf("seu sal�rio � %f\n", salariob);
		 } else{
		 }
		}
	}
	
	
	
	
	return 0;
}
