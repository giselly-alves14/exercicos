#include<stdio.h>
#include<math.h>



int main () {
	float media, variancia,soma_altura;
	int altura[10];
	for (int i=0; i<10;i++){
	
	printf("insira a altura em cm\n");
	scanf("%d", &altura[i]);
	
	
	media=(altura[0]+altura[1]+altura[2] +altura[3]+altura[4]+altura[5]+altura[6]+altura[7]+altura[8]+altura[9])/10;
	soma_altura=altura[0]+altura[1]+altura[2] +altura[3]+altura[4]+altura[5]+altura[6]+altura[7]+altura[8]+altura[9]; //somatoria das alturas dadasn

	variancia=((soma_altura-media)*(soma_altura-media)/10);

	} 
	
	
	printf("variancia das alturas: %.3f", variancia);
	 return 0;
}
