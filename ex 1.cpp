#include<stdio.h>
#include<locale.h>
int main (){
	float r,r1,r2,r3;
	
	printf("insira a r1 \n");
	scanf("%f", &r1);
	
	printf("insira a r2\n");
	scanf("%f", &r2);
	
	printf("insira a r3\n");
	scanf("%f", &r3);
	
	r=(r1+r2+r3);
	printf("a resistencia total é",r);
	
		return 0;
}
