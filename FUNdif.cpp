#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float dif (float p1, float p2){
	float result;
	
	if (p1>p2){
		result = p1-p2;
	}
	else{
		result = p2-p1;
	}
	return (result);
}

int main () {
	float p1, p2, result;
	setlocale (LC_ALL, "portuguese");
	
	printf("DIGITE O PONTO 1: \n");
	scanf("%f", &p1);
	printf("DIGITE O PONTO 2: \n");
	scanf("%f", &p2);
	
	result = dif (p1, p2);
	printf("O RESULTADO É: %f\n", result);
	return 0;
}
