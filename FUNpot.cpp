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
	
	printf("DIGITE A BASE DA POT�NCIA: \n");
	scanf("%d", &base);
	printf("DIGITE O EXPOENTE DA POT�NCIA: \n");
	scanf("%d", &exp);
	
	result =  pot (base, exp);
	
	printf("O RESULTADO DA POT�NCIA �: %d\n", result);
	
	return 0;
}
