#include<stdio.h>
#include<stdlib.h>

int main (){


	int num, mi, de, uni, res;
	printf("Digite um numero com tres algarismos: ");
	scanf("%d", &num);
	
	mi = num / 100;
	de = (num % 100) / 10;
	uni = (num % 10);
	
	res = (uni * 100) + (de * 10) + mi;
	
	printf("O inverso desse numero e %d", res);
	
	
	

}