#include<stdio.h>
//c�lculo de pot�ncia dissipada

int main ()
{
float p,i,r;
printf("insira a resistencia");
scanf("%f.3", &r);

printf("insira a corrente");
scanf("%f.3", &i);

p=i*i*r;
printf("a pot�ncia dissipada no circuito � %f", p);

return 0;

}
