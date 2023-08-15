#include<stdio.h>
#include<string.h>

int main(){
	
	char nome[7];
	char sobrenome[9];
	
	printf("Digite nome: ");
	gets(nome);
	printf("Digite sobrenome: ");
	gets(sobrenome);
	
	strcat(nome,sobrenome);
	printf("\n%s", nome);
}