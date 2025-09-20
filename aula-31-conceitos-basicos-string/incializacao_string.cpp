//Incialização de string

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Inicializando uma string
	//Forma convencional
	char nome1[20] = {'J', 'o', 'a', 'o','\0'};
	printf("Nome: %s\n", nome1);
	
	//Forma especial
	char nome2[20] = "Antonio";
	printf("Nome: %s\n", nome2);
	
	system("pause");
	return 0;
}
