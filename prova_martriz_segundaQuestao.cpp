#include<stdio.h>
#include<string.h>

int main(){
	
	char DNA[5][8];
	int cont=0;
	
	
	for(int o=1;o<6;o++){
		printf("Digite a %d fita: \n", o);	
		for(int e=1;e<9;e++){
			scanf("%c", &DNA[o][e]);
		}
	}
	
	printf("\n\nO consenso: ");
	
	for(int i=1;i<9;i++){
		if(cont!=0&&cont!=2){
			printf("?");}
			for(int u=1;u<4;u++){
				for(int a=u+1;a<6;a++){
					if(DNA[u][i]==DNA[a][i]){
						cont++;
						if(cont==2){
							printf("%c", DNA [u][i]);
							u=3;
						}
					}
				}
			}
	}
}