#include<stdio.h>
#include<math.h>
//calculo de potencia ativa
//t-angulo
int main (){
	float p,v,i,cos,t;
	
	printf("insira a tens�o");
	scanf("%f", &v);
	
	printf("insira a corrente");
	scanf("%f", &i);
	
	printf("insira o angulo de fase");
	scanf("%f", &t);
	
	p= v*i* cos (t);
	
	printf ("a potecia ativa � %f", p);
	
	return 0;
	
	
}
