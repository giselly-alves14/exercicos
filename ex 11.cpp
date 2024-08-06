#include<stdio.h>
#include<string.h>

//Entrar com nome, idade e sexo de 20 pessoas. Imprimir o nome se a pessoa for do sexo masculino e

int main ( ) {
	int idade;
	 char nome[50], sexo;
	
	

	for (int cont=1;cont<=20;cont++){
		printf("insira seu nome\n");
		gets(nome);
		
		printf("insira o sexo");
		scanf("%c", &sexo);
		
		printf("entre com sua idade");
	scanf("%d\n", &idade);

if((sexo=='m' )&& (idade>21)){
	printf("pessoa: %s", nome);
} else {
	printf("nao sera possivel identificar");
}

	}
		
	
	
	
	
	return 0;
}
