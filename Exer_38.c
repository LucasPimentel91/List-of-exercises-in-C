#include<stdio.h>

int main(){
	
	int ano, r1, r2, r3;
	
	printf("Qual e o ano: ");
	scanf("%d", &ano);
	
	r1=ano%4;
	
	if(r1==0){
		r2=ano%100;
		if(r2!=0){
			printf("\nEsse ano e bissexto");
		}else{
			r3=ano%400;
			if(r3==0){
				printf("\nEsse ano e bissexto");
			}else{printf("\nEsse ano nao e bissexto");}
		}
	}else{printf("\nEsse ano nao e bissexto");}
	
}