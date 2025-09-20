#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct endereco{
	char rua[50];
	int numero;
};

struct pessoa{
	char nome[50];
	int idade;
	struct endereco ender;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct pessoa p;
	
	printf("Digite seu nome: \n");
	fgets(p.nome, sizeof(p.nome), stdin);
	fflush(stdin);
	
	printf("Digite sua idade: \n");
	scanf("%d", &p.idade);
	fflush(stdin);
	
	printf("Digite o nome da rua: \n");
	fgets(p.ender.rua, sizeof(p.ender.rua), stdin);
	fflush(stdin);
	
	printf("Digite o número da rua: \n");
	scanf("%d", &p.ender.numero);
	fflush(stdin);
	
	printf("Nome..: %s\n", p.nome);
	printf("Idade.: %d\n", p.idade);
	printf("Rua...: %s\n", p.ender.rua);
	printf("Número: %d", p.ender.numero);
	
	system("pause");
	return 0;
}
