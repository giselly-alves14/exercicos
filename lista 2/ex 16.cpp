#include<stdio.h>

int main () {
	
	char  conceito;
	printf("insira seu conceito");
	scanf("%c", &conceito);
	
	switch(conceito){
	
	
	case 'A':
		printf("apredizagem plena");
		break;
	
	case 'b.':
			printf("aprendizagem parcialmente plena");
		break;
			case'C':
				printf("aprendizagem suficiente");
		break;
				case'D':
					printf("aprendizagem insuficiente");
				break;
				
			
	}


	
	
	
	
	
	
	return 0;
}

