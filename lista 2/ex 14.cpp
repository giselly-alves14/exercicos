#include <stdio.h>
#include <math.h>



int main (){
	
	float c, tax, t, m;
	
	printf("Digite o valor de capital investido. \n");
	scanf("%f",&c);
	
	printf("Digite o valor da taxa  \n");
	scanf("%f",&tax);
	
	
	printf("Agora digite o tempo de investimento (em anos). \n");
	scanf("%f",&t);	
	
	m=((c*(1+tax/100)),t);

	printf("Seu montante final apos %f anos sera de %f R$. \n", t, m);
	
	return 0;
}
