#include<stdio.h>
int main () {
	float nivel,vento;
	
	printf("insira a previsao do nivel d'água em mm");
	scanf("%f", &nivel);
	
	while (getchar() != '\n');
	printf("insira a velocidade media esperada do vento em kmh");
	scanf("%f", &vento);
	
	if((nivel>200) || (vento>100)){
		printf("ALERTA!! A EVACUAÇÃO DEVE SER FEITA IMEDIATAMENTE!!!");
		
	} else{
		printf("não será necessária a evacuação imediata");
		
	}
	
	
	
	
	return 0;
}
