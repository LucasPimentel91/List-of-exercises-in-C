#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int l, area, perimetro;
	printf("Digite o tamanho numerico do lado do quadrado: ");
	scanf("%d", &l);
	area = l * l;
	perimetro = 4 * l;
	printf("\nA area do quadrado e %d", area);
	printf("\nO perimetro do quadrado e %d", perimetro);

	
}

