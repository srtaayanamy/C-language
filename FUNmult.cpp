#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int mult (int n1, int n2, int n3) {
	int result = ((n1 * n2) * n3);
	return (result);
}

int main () {
	int n1, n2, n3, result;
	setlocale(LC_ALL, "Portuguese");
	printf("MULTIPLICAÇÃO DE 3 NÚMEROS: \n");
	printf("--------------------------- \n");
	printf("DIGITE N1: \n");
	scanf("%d", &n1);
	printf("DIGITE N2: \n");
	scanf("%d", &n2);
	printf("DIGITE N3: \n");
	scanf("%d", &n3);
	
	result = mult (n1, n2, n3);
	printf("O RESULTADO FOI: %d\n", result);
	
	return 0;
}


