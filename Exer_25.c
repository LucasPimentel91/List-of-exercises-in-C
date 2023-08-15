#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int mes;
	printf("Digite um numero equivalente a ordem dos meses do ano: ");
	scanf("%d", &mes);
	
	if(mes<=12){
		
		if(mes!=2){
			
			printf("Esse mes tem 30 dias");
			
		} else {
			
			printf("Esse mes tem 28 dias");
			
		}
		
	}else{
		printf("Digite um numero menor ou igual a 12");
		
	}
	
	
}