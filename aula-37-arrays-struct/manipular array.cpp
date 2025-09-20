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
	int i;
	
	for(i = 0; i < 2; i++){
		printf("Digite seu nome: \n");
		fgets(p[i].nome, sizeof(p[i].nome), stdin);
		fflush(stdin);
		
		printf("Digite sua idade: \n");
		scanf("%d", &p[i].idade);
		fflush(stdin);
		
		printf("Digite sua rua: \n");
		fgets(p[i].rua, sizeof(p[i].rua), stdin);
		fflush(stdin);
		
		printf("Digite seu número: \n");
		scanf("%d", &p[i].numero);
		fflush(stdin);
	}
	
	printf("\n");
	for(i = 0; i < 2; i++){
		printf("Nome da pessoa %d: %s", i, p[i].nome);
		fflush(stdin);
		
		printf("Idade da pessoa %d: %d\n", i, p[i].idade);
		fflush(stdin);
		
		printf("Nome da rua da pessoa %d: %s\n", i, p[i].rua);
		fflush(stdin);
		
		printf("Número da pessoa %d: %d\n", i, p[i].numero);
		fflush(stdin);
	}
	
	return 0;
}
