#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int num;
	printf("Digite um numero qualquer: ");
	scanf("%d", &num);
	
	if (num < 0) {
		
		printf("Esse numero e negativo.");
		
	} else if (num == 0){
		
		printf("Esse numero e nulo.")
		
	} else {
		printf("Esse numero e positivo.")
	}
	
	
}