#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int pot (int base, int exp){
	int result = (pow(base,exp));
	return (result);
}

int main (){
	int base, exp, result;
	setlocale (LC_ALL, "portuguese");
	
	printf("DIGITE A BASE DA POTÊNCIA: \n");
	scanf("%d", &base);
	printf("DIGITE O EXPOENTE DA POTÊNCIA: \n");
	scanf("%d", &exp);
	
	result =  pot (base, exp);
	
	printf("O RESULTADO DA POTÊNCIA É: %d\n", result);
	
	return 0;
}
