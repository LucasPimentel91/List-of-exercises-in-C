#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int codCartao, HHMM, mC, cC, dC, uC, mH, cH, dH, uH, codigo;
	printf("Digite os digitos finais do numero do cartao: ");
	scanf("%d", &codCartao);
	printf("Digite o horario da transacao: ");
	scanf("%d", &HHMM);
	
	//Seperar algarismos do numero:
	mC = codCartao / 1000;
	cC = (codCartao % 1000) / 100;
	dC = (codCartao % 100) / 10;
	uC = codCartao % 10;
	//Separar algarismos do horario:
	mH = HHMM / 1000;
	cH = (HHMM % 1000) / 100;
	dH = (HHMM % 100) / 10;
	uH = HHMM % 10;
	
	
	if(mC > mH){
		
		codCartao = mC;
		HHMM = mH;
		
		if(cC > cH){
			
			codCartao = (mC * 10) + cC;
			HHMM = (mH * 10) + cH;
			
			if(dC > dH){
				
			codCartao = (mC * 100) + (cC * 10) + dC;
			HHMM = (mH * 100) + (cH * 10) + dH;
			
			if(uC > uH){
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uC;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uH);	
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);
				
			} else {
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uH;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uC);
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			}
				
			} else {
				
				codCartao = (mC * 100) + (cC * 10) + dH;
				HHMM = (mH * 100) + (cH * 10) + dC;
				if(uC > uH){
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uC;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uH);	
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			} else {
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uH;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uC);
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			}

			}
			
			
		} else {
			
			codCartao = (mC * 10) + cH;
			HHMM = (mH * 10) + cC;
			if(dC > dH){
				
			codCartao = (mC * 100) + (cC * 10) + dC;
			HHMM = (mH * 100) + (cH * 10) + dH;
			
			if(uC > uH){
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uC;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uH);	
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			} else {
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uH;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uC);
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			}
				
			} else {
				
				codCartao = (mC * 100) + (cC * 10) + dH;
				HHMM = (mH * 100) + (cH * 10) + dC;
							
							}
		}
		
	} else {
		
		HHMM = mC;
		codCartao = mH;
		if(cC > cH){
			
			codCartao = (mC * 10) + cC;
			HHMM = (mH * 10) + cH;
			
			if(dC > dH){
				
			codCartao = (mC * 100) + (cC * 10) + dC;
			HHMM = (mH * 100) + (cH * 10) + dH;
			
			if(uC > uH){
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uC;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uH);	
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			} else {
				
			codCartao = (mC * 1000) + (cC * 100) + (dC * 10) + uH;
			HHMM = (mH * 1000) + (cH * 100) + (dH * 10 + uC);
			codigo = codCartao - HHMM;
			printf("O codigo de confirmacao e %d", codigo);	
			}
				
			} else {
				
				codCartao = (mC * 100) + (cC * 10) + dH;
				HHMM = (mH * 100) + (cH * 10) + dC;
				
			}
			
			
		} else {
			
			codCartao = (mC * 10) + cH;
			HHMM = (mH * 10) + cC;
			
		}	
		}
	}
	

