#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int velocidade;
	double trans;
	const float conversao = 3.6;
	printf("Digite a velocidade em metros por segundo ");
	scanf("%d", &velocidade);
	
	trans= velocidade * conversao;
	
	printf("\nA velocidade transformada e %f km\/h", trans);
	
}