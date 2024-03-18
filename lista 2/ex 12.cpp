#include<stdio.h>
#include<math.h>

int main () {
	float E, Po, Pr,t;
	
	printf("insira a energia consumida antes da automação");
	scanf("%f", &Po);
	
	printf("insira a energia consumida pós automação");
	scanf("%f", &Pr);
	
	printf("insira o tempo de instalação da automação");
	scanf("%f", &t);
	
	E=(Po-Pr)*t;
	
	printf("a energia economizada pós automação equivale a %f:", E ,"kWh");
	
	return 0;
}
