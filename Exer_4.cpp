#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int l1, l2, l3, perimetro;
	printf("Digite o lado do triangulo: ");
	scanf("%d", &l1);
	printf("\nDigite o segundo lado do triangulo: ");
	scanf("%d", &l2);
	printf("\nDigite o terceiro lado do triangulo: ");
	scanf("%d", &l3);
	
	perimetro = l1 + l2 + l3;
	
	printf("\nO perimetro do triangulo e %d", perimetro);
	
}