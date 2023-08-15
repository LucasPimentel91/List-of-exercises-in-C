#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int tc, tf;
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%d", &tf);
	
	tc= 5*(tf - 32)/9;
	
	printf("\nConvertendo para Celsius fica %d"" graus aproximadamente", tc);
	
	
}