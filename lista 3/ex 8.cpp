#include<stdio.h>

int main () {
	float num1,num2;
	
	printf("insira o primeiro numero");
	scanf("%f", &num1);
	
	
	printf("insira o segundo numero");
	scanf("%f", &num2);
	
	if(num1<num2){
		printf("os numeros em ordem decrescente: %.1f, %.1f\n", num2, num1); 
	} else {
		printf("os numeros em ordem decrescente: %.1f, %.1f\n", num1, num2);
		
	}
	

return 0;


}
