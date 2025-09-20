//Contando caracteres vogais
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[20] = "Linguagem C";
	int i, j, total = 0;
	int tam1 = strlen(str);
	
	for(i = 0; i < tam1; i++){
		if(str[i] == 'a' || str[i] == 'e'){
			total++;
		}
	}
	
	printf("Quantidade de vogais = %d\n", total);
	
	system("pause");
	return 0;
}
