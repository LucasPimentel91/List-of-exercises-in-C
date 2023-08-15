//strcpy. Sua forma geral é: strcpy (string_destino,string_origem);
//A função strcpy() copia a string-origem para a string- destino.

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//	char nome[6];
//	char sobrenome[9];
//	printf("Digite o nome: ");
//	gets(nome);
//	strcpy(sobrenome, nome);
//	printf("\n\n%s", sobrenome);
//	
//}



#include<stdio.h>
#include<string.h>

int main(){
	
	char nome[6];
	char sobrenome[9];
	
	printf("Digite o nome: ");
	gets(nome);
	for(int i=0;i<6;i++){
		if(nome[i]!='\0'){
			sobrenome[i]=nome[i];	
		}
		
	}
	
	printf("%s", sobrenome);
}