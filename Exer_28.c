#include<stdio.h>

int main(){
	
	char letra;
	printf("Digite uma letra qualquer: ");
	scanf("%c", &letra);
	
	switch (letra){
		 
		case 'a':
			printf("Essa letra e uma vogal.");
		break;
		case 'e':
			printf("Essa letra e uma vogal.");
		break;
		case 'i':
			printf("Essa letra e uma vogal.");
		break;
		case 'o':
			printf("Essa letra e uma vogal.");
		break;
		case 'u':
			printf("Essa letra e uma vogal.");
		break;
		default: 
		printf("Esse letra e uma consoante.");
	}
	
}