#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int nota[3][3];
	int quant=0;
	int a=0;
	printf("Somente notas de 0 a 10\n\n");
	for(int i=0;i<3;i++){
		for(int u=0;u<3;u++){
			a++;	
			printf("Aluno %d\n", a);
			scanf("%d", &nota[i][u]);
			}
		}	
	for(int i=0;i<3;i++){
		for(int u=0;u<3;u++){
			if(nota[i][u]==9){
				quant++;
			} 
		}
	}
	printf("A nota 9 se repete %d vezes", quant);
}