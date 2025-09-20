#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	struct pessoa p = {"Antonio", "Rua 10", 20, 116};
	struct pessoa p2;
	
	//Estruturas suportam atribuição direta, desde que sejam do mesmo tipo;
	p2 = p;
	
	printf("Nome: %s\n", p2.nome);
	printf("Idade: %d\n", p2.idade);
	printf("Rua: %s\n", p2.rua);
	printf("Numero: %d\n", p2.numero);
}
