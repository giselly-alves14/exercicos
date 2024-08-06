#include<stdio.h>
 int main (){
 	int  numero;
 	int vezes=0;
 	
	 printf("insira numeros");
	 scanf("%d", numero);
	 while (1){
 		printf("numero inseridos: %d\n");
	 scanf("%d", numero);
	 
	 if(numero<0){
	 	break;
	 }
	 vezes++;
	 }
	return 0;
 }
