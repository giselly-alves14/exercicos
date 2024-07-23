#include<stdio.h>
int main () {
	float altura, p;
	char sexo;
	
	printf("insira sua altura em metros");
	scanf("%f", &altura);

	//usarei while para limpar a linha antes de ler o genero
	
	while ((getchar()) !='\n');
	printf("insira seu gênero. M para masculino e F para feminino");
	scanf("%c", &sexo);
	
	
	if(sexo=='m'){
	p=(72.7*altura)-58;
		

	} else if(sexo=='f'){
		p=(62*1*altura)-44.7;
	}
else{
	printf("genero invalido");

}	
	
	printf("peso ideal: %.2f \n", p);	
	
	
	
	return 0;
}
