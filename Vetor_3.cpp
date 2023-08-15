#include<stdio.h>

int main(){
	
	int idade, soma, media, numero, n;
	idade=0;
	idade++;
	media = 0;
	soma=0;

	while(idade!=0){
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		for (n=1;n<=10;n++)
		soma += idade;
		media=soma/n;
		printf("\nEssa e a media atualizada: %d\n");
		
	}
	
}