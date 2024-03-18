#include<stdio.h>
//conversor de notas
// n:nota, c:conceito
int main () {
	
	float n,c;
	
	printf("insira sua nota");
	scanf("%f", &n);
	
		if (n>=90) {
			printf("seu conceito é A \n");
			
		}else{
			   if (n<90,n>=80) {
			   	printf("conceito B");
			   	
			   }else{
			   	  if (n<80,n>=70){
			   	  	
			   	  	printf("conceito C");
					 } else {
					 	if(n<80,n>=70) {
					 		printf("conceito D");
					 		
						 }else{
						 	if(n<60,n>=50) {
						 		printf("conceito E");
						 	
						
							 } else {
							 	if (n<50) {
							 		printf("conceito F");
								 } else{
								 	
								 }
								 
							 }
						 }
					 }
					 
			   }
	}
return 0;
}


