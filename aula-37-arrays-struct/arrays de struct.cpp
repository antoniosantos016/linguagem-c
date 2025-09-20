#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct pessoa p[4];
	p[0].idade = 31;
	strcpy(p[1].nome, "Ricardo");
	p[2].numero = p[0].numero - 1;
	
	printf("Pessoa 1, idade: %d\n", p[0].idade);
	printf("Pessoa 2, nome: %s\n", p[1].nome);
	printf("Pessoa 3, número: %d\n", p[2].numero);
	return 0;
}
