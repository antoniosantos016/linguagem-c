//Acessando elementos da String

#include <stdio.h>
#include <stdlib.h>

int main(){
	char palavra[20] = "Teste";
	printf("Palavra = %s\n", palavra);
	palavra[0] = 'L';
	printf("Palavra = %s\n", palavra);
	system("pause");
	
	return 0;
}
