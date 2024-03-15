#include<stdio.h>
//divisor de tensão

int main () {
	float t0,t1,r1,r2, n;
	
printf("insira a tensão de entrada");
scanf("%f", &t0);

printf("agora insira a as resistencias r1 e r2, respectivamente");
scanf("%f", &r1);
scanf("%f", &r2);

printf("insira o resistor que voce deseja calcular a tensão");
scanf("%f", &n);

if (n=1){ 
 t1= (r2/(r1+r2))*t0;
 printf("a tensão sobre o resistor 1 é %f", t1);
 
} else{ t1=(r1/(r1+r2))*t0;
printf("a tensao sobre o resistor 2 é %f", t1);
}
 return 0;
}
