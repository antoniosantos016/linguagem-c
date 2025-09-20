//\0

#include <stdio.h>
#include <stdlib.h>

int main(){
	/*A função '\0' é desconsiderar as posições restantes da string*/
	char palavra[20] = "Oitenta";
	printf("Palavra: %s\n", palavra);
	
	palavra[2] = '\0';
	printf("Palavra: %s\n", palavra);
	
	system("pause");
	return 0;
}
