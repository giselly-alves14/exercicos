#include<stdio.h>
#include<math.h>
int main (){
	int tabuada, i;
	
	
	
	printf("dentre as tabuadas de 1 e 10, qual voce deseja imprimir?");
	scanf("%d", &tabuada);
	
	for (int i=1; i<=10; i++){
  
	printf("%d*%d=%d \n", tabuada,i,tabuada*i);
	}
	
	
	
	
	return 0;
}
