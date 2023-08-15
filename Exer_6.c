#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	
	int n1, n2, quociente, r;
	printf("Digite um numero qualquer: ");
	scanf("%d", &n1);
	printf("Digite outro numero qualquer: ");
	scanf("%d", &n2);
	

	quociente= n1 / n2;
	r= n1 % n2;
	
	printf("\nO resultado da divisao desses numeros e %d", quociente);
	printf("\nE o resto e %d", r);
	
	
	
}