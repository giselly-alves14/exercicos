#include<stdio.h>
#include<stdio.h>
int main ( ){
	int a=1;
	int b=2;
	int proxNum;
	
	for ( int i=1; i<=10; i++){
		proxNum=a+b;
		printf( "%d", proxNum);
		
		a=b;
		b=proxNum;
	}
	
	
	
	
	return 0;
}
