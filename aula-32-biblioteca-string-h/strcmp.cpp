//Usando strcmp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Copiando uma string
	char palavra1[20] = "Linguagem C";
	char palavra2[30] = "LINGUAGEM C";
	
	if(strcmp(palavra1, palavra2) == 0)
		printf("Strings iguais!\n");
	else 
		printf("Strings diferentes!\n");
	
	
	system("pause");
	return 0;
}
