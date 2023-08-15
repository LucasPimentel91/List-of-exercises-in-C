#include<stdio.h>

int main(){
	
	int vetor[10];
	int resto;
	int quantidade=0;
	
	for(int i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	
	for(int e=0;e<10;e++){
		resto=vetor[e]%2;
		if(resto==0){
			quantidade++;
		}
	}
	
	printf("\nHa %d pares no vetor", quantidade);
}