#include<stdio.h>
#include<math.h>

int main () {
	float E, Po, Pr,t;
	
	printf("insira a energia consumida antes da automa��o");
	scanf("%f", &Po);
	
	printf("insira a energia consumida p�s automa��o");
	scanf("%f", &Pr);
	
	printf("insira o tempo de instala��o da automa��o");
	scanf("%f", &t);
	
	E=(Po-Pr)*t;
	
	printf("a energia economizada p�s automa��o equivale a %f:", E ,"kWh");
	
	return 0;
}
