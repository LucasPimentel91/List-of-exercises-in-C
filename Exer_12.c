#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int n1, n2, n3, n4, bi1, bi2, semestre;
	//1º bismestre
	printf("Digite a nota da primeira prova: ");
	scanf("%d", &n1);
	printf("Digite a nota da segunda prova: ");
	scanf("%d", &n2);
	bi1= n1 + n2;
	printf("\nNota do primeiro bimestre e %d", bi1);
	
	//2º bimestre
	printf("\n\nDigite a nota da terceira prova: ");
	scanf("%d", &n3);
	printf("Digite a nota da quarta prova: ");
	scanf("%d", &n4);
	bi2= n3 + n4;
	printf("\nNota do segundo bimestre e %d\n", bi2);

	//nota semestral
	semestre= (bi1 + bi2)/2;
	printf("\n\nA nota semestral e %d", semestre);
	
}