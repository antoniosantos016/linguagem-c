#include <stdio.h>
#include <stdlib.h>

int main(){
	//Lendo e escrevendo uma string
	char palavra[20];
	printf("Digite uma palavra: ");
	scanf("%s", palavra)/
	//fgets(palavra);
	
	printf("Palavra lida: %s\n", palavra);
	
	system("pause");
	return 0;
}
