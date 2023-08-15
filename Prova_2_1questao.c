#include<stdio.h>

int main(){
	
	int vetor1[10], vetor2[10], vetorResultado[4];
	//1º Desafio
	for(int i=0;i<10;i++){
		
		printf("Digite o valor do primeiro arry na ordem: ");
		scanf("%d", &vetor1[i]);
		printf("Digite o valor do segundo arry na ordem: ");
		scanf("%d", &vetor2[i]);
	}
	
	for(int o=0;o<10;o++){
		if(vetor1[o]!=vetor2[o]&&vetor1[o]<32){
			printf("%d,", vetor1[o]);
		//2º Desafio
		for(int u=0;u<4;u++){
			vetorResultado[u]=vetor1[o]+vetor2[o];
		}	
		}
			
		
	}
	
	for(int a=0;a<4;a++){
			printf("A soma dos vetores: %d,", vetorResultado[a]);
			
}
}