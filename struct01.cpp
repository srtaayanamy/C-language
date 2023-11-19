#include <stdio.h>
#include <locale.h>
int main (){
	struct ficha{
		char nome [40];
		int nota;
	};
  	setlocale(LC_ALL, "Portuguese");
	struct ficha pessoa;
	printf("Digite o nome da pessoa: ");
	fgets(pessoa.nome, 40, stdin);
	printf("Digite a nota da pessoa: ");
	scanf("%d", &pessoa.nota);
	
	printf("O dados são: \nNome: %s \nNota: %d", pessoa.nome, pessoa.nota);
	return 0;
}
