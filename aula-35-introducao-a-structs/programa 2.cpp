#include <stdio.h>
#include <stdlib.h>

//definindo uma estrutura

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	//SEM STRUCT
	char nome[50], nome2[50], nome3[50], nome4[50];
	int idade1, idade2, idade3, idade4;
	char rua1[50], rua2 [50], rua3[50], rua4[50];
	int numero1, numero2, numero3, numero4;
	
	//COM STRUCT
	struct pessoa p1, p2, p3, p4;
	
	system("pause");
	return 0;
}
