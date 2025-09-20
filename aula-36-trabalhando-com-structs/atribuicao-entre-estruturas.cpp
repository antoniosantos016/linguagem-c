#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	//Atribuição entre estruturas
	struct pessoa p = {"Antonio", "Rua 10", 20, 116};
	struct pessoa p2;
	strcpy(p2.nome, p.nome);
	strcpy(p2.rua, p.rua);
	p2.idade = p.idade;
	p2.numero = p.numero;
	
	printf("Nome: %s\n", p2.nome);
	printf("Idade: %d\n", p2.idade);
	printf("Rua: %s\n", p2.rua);
	printf("Numero: %d\n", p2.numero);
	
}
