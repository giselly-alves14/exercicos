#include<stdio.h>
//c�culo de resistencia equivalentes

int main () {
 float r,r1,req,req1;
 
 printf("insira as resistencia r1 \n");
 scanf("%f", &r);

printf("insira a resistencia r \n");
 scanf("%f", &r1);
 
 req=r1+r;
 printf("a resistencia equivalente em s�rie �: %f", req);
 
 
 req1=(r*r1)/(r+r1);
 printf("a resistencia equivalente em paralelo �: %f", req1);
 
 return 0;	
}



