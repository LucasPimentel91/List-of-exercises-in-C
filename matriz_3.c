#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int valorA[3][3], valorB[3][3];
	int quant=0;
	
	for(int i=0;i<3;i++){
		printf("Linha %dA\n\n", i+1);
		for(int o=0;o<3;o++){
			scanf("%d", &valorA[i][o]);
		}
		printf("\n\nLinha %dB\n\n", i+1);
		for(int o=0;o<3;o++){
			scanf("%d", &valorB[i][o]);
		}	
	}
	
	for(int u=0;u<3;u++){
		for(int a=0;a<3;a++){
			if(valorA[u][a]==valorB[u][a]&&u==u&&a==a){
				printf("Os valores na posicao [%d],[%d] sao iguais a %d", u, a, valorA[u][a]);
			}else{
				printf("Nao ha numeros iguais na mesma posicao.");
			}	
		}
	}
	
}