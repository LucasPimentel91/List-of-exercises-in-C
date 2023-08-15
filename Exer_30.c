#include<stdio.h>

int main(){
	
	int quant; 
	char tipo;
	float VTA, VTG, descontoA, descontoG, ValDesA, ValDesG;
	
	printf("Qual e o tipo (A-Alcool/G-Gasolina): ");
	scanf("%c", &tipo);
	printf("\nQual e a quantidade do(a) %c: ", tipo);
	scanf("%d", &quant);
	
	VTA=quant*1.90;
	VTG=quant*2.70;
	
	if(tipo=='G'){
		if(quant<=25){
		descontoG=(VTG*3)/100;
		
		ValDesG=VTG-descontoG;
		
		printf("Valor final e: %f de gasolina\n", ValDesG);
		
	} else if(quant>25)
		descontoG=(VTG*5)/100;
		
		ValDesG=VTG-descontoG;
		
		printf("Valor final e: %f de gasolina", ValDesG);
	}else if(tipo=='A'){
		if(quant<=25){
		descontoA=(VTA*2)/100;
		
		ValDesA=VTA-descontoA;
		
		printf("Valor final e: %f de alcool", ValDesA);
		
	} else if(quant>25)
		descontoA=(VTA*4)/100;
		
		ValDesA=VTA-descontoA;
		
		printf("Valor final e: %f de alcool", ValDesA);
		
	}
	
	
}