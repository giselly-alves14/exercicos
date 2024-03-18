#include<stdio.h>

//calculo fase ou neutro

int main (){
	float tensao;
	
	printf("insira a tensão");
	scanf("%f", &tensao);
	
	if(tensao>=0, tensao<=50) { 
	 printf("fio neutro");
	}else{
		printf("fio fase");
	}
	
	
	return 0;
}
