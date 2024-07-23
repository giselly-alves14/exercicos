#include<stdio.h>
int main () {
	 
	float lucro,compra;
	printf("entre com o valor da compra ");
	scanf("%f", &compra);
	
	if (compra<20){
		lucro=compra*0.45;
		
	 } else {
	 	lucro=compra*0.30;
	 }
	
	
	printf("lucro desta compra %.2f", lucro);
	
	
	
	return 0;
}
