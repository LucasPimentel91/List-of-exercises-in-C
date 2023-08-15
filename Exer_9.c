#include<stdio.h>
#include<stdlib.h>

int main(){
	int r, al;
	double volume;
	const float p = 3.1416;
	printf("Digite o raio da base cilindrica e a altura da lata: ");
	scanf("%d %d", &r, &al);
	
	volume= p * (r*r) * al;
	
	printf("O volume da lata de oleo e %f", volume);
	
}