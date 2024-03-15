#include <stdio.h>
int main ()
{
	float r,v,i;
	printf("entre com a resistencia\n");
	scanf("%f.2", &r);
	
	printf("entre com a tensão\n");
	scanf("%f.2",&v);

  i= v/r;
  
  printf("a corrente é: %f", i);
  
  return 0;

}
