#include<stdio.h>

int main(){
	
	float n1, n2, n3, media, pesoM, PESOm;
	pesoM=5;
	PESOm=2.5;
	
	printf("Digite tres numeros diferentes: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if(n1>=n2&&n1>=n3){
		
		media= (n1*pesoM + n2*PESOm + n3*PESOm) / (pesoM + PESOm);
		printf("A media desses numeros e %f", media);
		
	}  else if(n2>=n1&&n2>=n3){
		media= (n2*pesoM + n1*PESOm + n3*PESOm) / (pesoM + PESOm);
		printf("A media desses numeros e %f", media);
		
	}else{
		media= (n3*pesoM + n1*PESOm + n2*PESOm) / (pesoM + PESOm);
		printf("A media desses numeros e %f", media);
	}
	
}