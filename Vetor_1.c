#include<stdio.h>

int main(){
	
	int n, nota1, nota2, peso1, peso2; 
	double media;
	printf("Escolha uma das opcoes do menu:\n\n\n1. Media aritmetica\n2. Media ponderada\n3. Sair\n\n\n");
	scanf("%d", &n);
	
	if(n==1){
		
		printf("Quais sao as duas notas: ");
		scanf("%d%d", &nota1, &nota2);
		media= (nota1 + nota2)/2;
		printf("A media aritmetica das notas e %lf", media);
		
	}else if(n==2){
		
		printf("Quais sao as duas notas: ");
		scanf("%d%d", &nota1, &nota2);
		printf("Quais os pesos de cada um: ");
		scanf("%d%d", &peso1, &peso2);
		media= (nota1*peso1 + nota2*peso2)/(peso1 + peso2);
		printf("A media ponderada das notas e %lf", media);
		
	}else{
		
		printf("Programa encerrada!\nAperte Enter para sair.");
		
	}
	
}