 #include<stdio.h>
 #include<math.h>
 //Criar um algoritmo que imprima os 10 primeiros termos da série de Fibonacci. 
 int main (){
 int cont_next;
 int termo1=1;
 int termo2=1;
 

  
 for (int cont=1;cont<=10;cont++){
 cont_next=termo1+termo2;

printf("dez primeiros termos do teorema de Fibonacci: %d\n", termo1,termo2, cont_next);


termo1=termo2;
termo2=cont_next;
 }

 return 0;
 }
