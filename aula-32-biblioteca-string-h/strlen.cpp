//Usando strlen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//O tamanho de uma string / qtd de char 
	char palavra[20] = "Linguagem C";
	int tamanho = strlen(palavra);
	
	printf("Tamanho = %d caracteres\n", tamanho);
	system("pause");
	return 0;
}
