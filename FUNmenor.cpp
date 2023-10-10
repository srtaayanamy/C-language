#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int nmenor (int n1, int n2){
	int menor;
	if(n1<n2){
		menor=n1;
	}
	else{
		menor=n2;
	}
}

int main () {
	int n1, n2, menor;
	setlocale(LC_ALL, "Portuguese");
	
		printf("INFORME N1: \n");
		scanf("%d", &n1);
		printf("INFORME N2: \n");
		scanf("%d", &n2);
		menor = nmenor (n1, n2);
		printf("O MENOR NÚMERO É: %d\n", menor);
	
	return 0;
}

