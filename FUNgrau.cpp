#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fah (float cel){
	float result = ((1.8*cel)+32);
	return (result);
}

int main (){
	float cel, result;
	setlocale (LC_ALL, "portuguese");
	printf("DIGITE OS GRAUS CELSIUS: ");
	scanf("%f", &cel);
	
	result = fah (cel);
	
	printf("O RESULTADO EM F, É: %.3f", result);
	
	return 0;
}
