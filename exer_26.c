#include<stdio.h>

int main(){
	
	int n1, n2, n3, soma;
	printf("Digite tres valores diferentes: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if(n1>=n2 && n1>=n3){
		
		if(n2>=n3){
			
			soma= n1 + n2;
			printf("A soma dos maiores e %d", soma);
			
		} else { 
			soma= n1 + n3;
			printf("A soma dos maiores e %d", soma);
		}
		
	} else {
		soma= n3 + n2;
		printf("A soma dos maiores e %d", soma);
	}
	
}