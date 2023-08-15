#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int d, an, ran, mes, dias;
	printf("Digite a sua quantidade de dias de vida: ");
	scanf("%d", &d);
	
	an= d / 365;
	ran= d % 365;
	mes= ran/30;
	dias= ran % 30;
	
	printf("Voce tem %d anos, %d meses, %d dias", an, mes, dias);
		
}