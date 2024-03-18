#include<stdio.h>
// ex 5

int main () {
	
	float P,n,a,v,d;
printf("insira a area");
	scanf("%f", &a);
	
	printf("insira a densidade");
	scanf("%f", &d);
	
	printf("insira a velocidade");
	scanf("%f", &v);
	
	printf("insira a eficiencia do conversor");
	scanf("%f", &n);
	
	P=(d*a*v*v*v*n)/2;
	printf("a quantidade de energia produzida é %f", P);
	
	return 0;
}
