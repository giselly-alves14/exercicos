#include<stdio.h>
//classificador faixa et�ria

int main () {
	
	float idade;
	
	printf("insira sua idade\n");
	scanf("%f",&idade);
	
	if(idade<=12) {
		printf("crian�a\n");
		
	}else{
		if(idade>=13, idade<=18){
			printf("adolescente\n");
		} else{
			if(idade>=19, idade<=60){ 
			printf("adulto\n");
			}else{
				if(idade>60) {
					printf("idoso\n");
					
				}else{
				}
			}
		}
	}
	
	
	return 0;
}

