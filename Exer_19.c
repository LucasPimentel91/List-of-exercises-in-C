#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int a, b;
	double X;
	printf("Digite o valor do coeficiente \"a\": ");
	scanf("%d", &a);
	printf("Digite o valor do coeficiente \"b\": ");
	scanf("%d", &b);
	
	
	X = (b / a) + ((b % a) / a);
	
	printf("A raiz da equacao %dx + %d = 0 e %f", a, b, X);
	
}