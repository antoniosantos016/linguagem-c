#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	//Inicializando uma estrutura
	/*Podemos definiar uma lista de valores
	para colocar na estrutura(como em arrays)*/
	
	//struct pessoa p = {"Antonio", "Rua 1", 31, 116};
	
	struct pessoa p = {"Antonio", "Rua 2", 20};
	
	printf("%d", p.numero);
	//Campos não definidos são inicializados com zero ou uma string vazia("");
}
