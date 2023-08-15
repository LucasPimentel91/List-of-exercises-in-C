#include<stdio.h>
#include<stdlib.h>

int main (){


	int  valor, cem, ciq, vit, de, cin, doi, um;
	printf("Digite o numero do saque feito: ");
	scanf("%d", &valor);
	
	cem = valor / 100;
	ciq = (valor % 100) / 50;
	vit = (valor % 100) % 50 / 20;
	de = (valor % 100) % 50 % 20 / 10;
	cin = (valor % 100) % 50 % 20 % 10 / 5;
	doi = (valor % 100) % 50 % 20 % 10 % 5 / 2;
	um = (valor % 100) % 50 % 20 % 10 % 5 % 2 / 1;
	
	printf("%d nota(s) de cem reais", cem);
	printf(", %d nota(s) de cinquenta reais", ciq);
	printf(", %d nota(s) de vinte reais", vit);
	printf(", %d nota(s) de dez reais", de);
	printf(", %d nota(s) de cinco reais", cin);
	printf(", %d nota(s) de dois reais", doi);
	printf(", %d nota(s) de Um real", um);
}