//\0

#include <stdio.h>
#include <stdlib.h>

int main(){
	/*A fun��o '\0' � desconsiderar as posi��es restantes da string*/
	char palavra[20] = "Oitenta";
	printf("Palavra: %s\n", palavra);
	
	palavra[2] = '\0';
	printf("Palavra: %s\n", palavra);
	
	system("pause");
	return 0;
}
