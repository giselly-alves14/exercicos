#include <stdio.h>
#include <math.h>

//classificador de angulos 


int main (){
	
	float ang;
	

	printf("Digite um  angulo");
	scanf("%f", &ang);
	
	
		
		if(ang==180){
			
			printf("Angulo raso. \n");
			
		}else{
			
			if(180>ang, 90<ang){
				
				printf("Angulo obtuso. \n");
				
			}else{
				
				if(ang==90){
					
					printf("Angulo reto. \n");
					
				}else{
					
					if(90>ang){
						
						printf("Angulo agudo. \n");
						
					}
					
				}
				
			}
			
		}
	

//OBS: O exercício não está matematicamente completo, mas... :(

	return 0;
}
