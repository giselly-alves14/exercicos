#include<stdio.h>
int main () {
	float nivel,vento;
	
	printf("insira a previsao do nivel d'�gua em mm");
	scanf("%f", &nivel);
	
	while (getchar() != '\n');
	printf("insira a velocidade media esperada do vento em kmh");
	scanf("%f", &vento);
	
	if((nivel>200) || (vento>100)){
		printf("ALERTA!! A EVACUA��O DEVE SER FEITA IMEDIATAMENTE!!!");
		
	} else{
		printf("n�o ser� necess�ria a evacua��o imediata");
		
	}
	
	
	
	
	return 0;
}
