//A função strcat() tem a seguinte forma geral:
//strcat (string_destino,string_origem);
//A string de origem permanecerá inalterada e será anexada ao fim da string
//de destino.

#include<stdio.h>
#include<string.h>

int main(){
	
	char nome[7];
	char sobrenome[9];
	char completo[16];
	int b;
	printf("Digite nome: ");
	gets(nome);
	printf("Digite sobrenome: ");
	gets(sobrenome);
	
	for(int i=0;i<7;i++){
		completo[i]=nome[i];
	}
	
	for(int a=7;a<16;a++){
		b=a-6;
		completo[a]=sobrenome[b];
		
	}
	
	printf("\n%s", completo);
}