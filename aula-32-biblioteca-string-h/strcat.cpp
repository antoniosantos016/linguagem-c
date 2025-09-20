//Usando strcat

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Copiando uma string
	char palavra1[20] = "Bom ";
	char palavra2[30] = "Dia";
	
	strcat(palavra1, palavra2); //A concatenação fica salva na primeira string declarada
	
	printf("Palavras concatenadas = %s\n", palavra1);
	printf("Palavras concatenadas = %s\n", palavra2);
	
	system("pause");
	return 0;
}
