#include<stdio.h>
#include<stdlib.h>

int main(){
	
		int r1, r2, r3; 
		double resPara, resEqui;
		printf("Digite as resistencias em paralelo: ");
		scanf("%d %d", &r1, &r2);
		printf("\nDigite a resistencia em serie: ");
		scanf("%d", &r3);
		
		//Paralelo
		resPara = (r1 * r2) / (r1 + r2); 
		 
		//Equivalente
		resEqui= resPara + r3;
		
		printf("\nA resistencia equivalente e %f", resEqui);
		
	
}