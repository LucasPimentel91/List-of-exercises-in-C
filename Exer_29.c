#include<stdio.h>

int main(){
	
	float salario, desconto, valorReal;
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	desconto = (11 * salario)/100;
	
	if(desconto <= 334.29){
		
		valorReal= salario - desconto;
		printf("Esse e o valor liquido a receber %f");
	} else{
		printf("O desconto excede o valor permitido.")
		
	}
	
}