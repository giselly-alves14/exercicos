#include<stdio.h>
//tempo de carga de um capacitor

int main (){
	float r,c,t;
	printf("insira a capacitancia ");
	scanf("%f,1", &c);

printf("insira a resistncia do circuito ");
	scanf("%f.1", &r);
	
	t=c*r;
	
	printf("o tempo de carga é %f.1", t);
	
	return 0;
	
}
