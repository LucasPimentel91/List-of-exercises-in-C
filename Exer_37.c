#include<stdio.h>

int main(){
	
	int tipo, acre; 
	float valorFinal, valorDesconto;
	
	printf("Qual o tipo de praga: \n\n1- Ervas daninhas\n2- Gafanhoto\n3- Broca\n4- Todos acima\n\nR: ");
	scanf("%d", &tipo);
	printf("\nQual o tamanho do terreno em acre: ");
	scanf("%d", &acre);
	
	if(tipo==1){
		
		if(acre>1000){
			valorFinal=47.5*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}	
		}else{
			valorFinal=50*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}
		
	}else if(tipo==2){
		
		if(acre>1000){
			valorFinal=95*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}else{
			valorFinal=100*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}
		
	}else if(tipo==3){
		
		if(acre>1000){
			valorFinal=142.5*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}else{
			valorFinal=150*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}
		
	}else if(tipo==4){
		
		if(acre>1000){
			valorFinal=237.5*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}else{
			valorFinal=250*acre;
			if(valorFinal>750.0){
				valorDesconto=valorFinal-(valorFinal*10/100);
				printf("Valor total do servico: %f", valorDesconto);
			}else{printf("Valor total do servico: %f", valorFinal);}
		}
		
	}else{printf("OPCAO INEXISTENTE!!!");}
	
}