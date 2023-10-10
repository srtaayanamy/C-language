#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int cal (int opc, int n1, int n2){
	int result;
	if(opc==1){
		result = n1 + n2;
	}
	else if (opc==2){
		result = n1 - n2;	
	}
	else if (opc==3){
		result = n1 * n2;	
	}
	else if (opc==4){
		result = n1 / n2;	
	}
	return (result);
}

int main (){
	int  opc, n1, n2, result;
	setlocale (LC_ALL, "portuguese");
	
	printf("ESCOLHA: 1-SOMA, 2-SUB, 3-MULT, 4-DIV \n");
	scanf("%d", &opc);
	printf("DIGITE UM NÚMERO \n");
	scanf("%d", &n1);
	printf("DIGITE UM NÚMERO \n");
	scanf("%d", &n2);
	
	result = cal (opc, n1, n2);
	
	printf("O RESULTADO É: %d\n", result);
	
	return 0;
}
