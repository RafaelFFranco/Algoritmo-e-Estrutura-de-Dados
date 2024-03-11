#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int contpar = 0, contimpar = 0, num;
	
	do {
		printf("escreva um numero, para encerrar digite 0: ");
		scanf("%d", &num);
	
		if(num != 0) {
		    if(num % 2 == 0) {
			    contpar = contpar + 1; 
		    } else {
			    contimpar = contimpar + 1;
			}
		}
	} while(num != 0);
	
	printf("a quantidade de numeros pares é: %d\n", contpar);
	printf("a quantidade de numeros impares é: %d\n", contimpar);
	
	 return 0;
}
