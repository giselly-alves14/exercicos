#include<stdio.h>
//cálculo de potência dissipada

int main ()
{
float p,i,r;
printf("insira a resistencia");
scanf("%f.3", &r);

printf("insira a corrente");
scanf("%f.3", &i);

p=i*i*r;
printf("a potÊncia dissipada no circuito é %f", p);

return 0;

}
