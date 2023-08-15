#include<stdio.h>

int main(){
	
	int senha[10], chute[10];
	int tentativa=0;
	int excelente=0;
	int bom=0;
	
	for(int i=0;i<10;i++){
		printf("Digite um elemento da senha: ");
		scanf("%d", &senha[i]);
	}
	do{
		for(int o=0;o<10;o++){
			printf("Digite um elemento do chute: ");
			scanf("%d", &chute[o]);
		}
		for(int a=0;a<10;a++){
			if(senha[a]=chute[a]){
				excelente++;
			}
		}
		for(int e=0;e<10;e++){
			for(int u=0;u<10;u++){
				if(senha[e]=chute[u]){
					bom++;
				}
			}
		}
		tentativa++;
		printf("(%d,%d)", excelente, bom);
	}while(senha[10]=chute[10]);
	printf("Senha correta!\n\nTentativas: %d.", tentativa);
}