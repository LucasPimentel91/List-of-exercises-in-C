//Programa bancário;Verificador de dígito;Internet Banking//

#include<stdio.h>

int main(){
	
	int n1, n2, n3, n4, somatorio, resto, digito;
	
	printf("Digite a agencia da conta, numero por vez: ");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
	
	somatorio=(n1*5)+(n2*4)+(n3*3)+(n4*2);
	resto=somatorio%11;
	digito=11-resto;
	
	printf("\nSegui a agencia com o digito: %d%d%d%d-%d", n1, n2, n3, n4, digito);
	
}