//Invertendo uma string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Invertendo uma string
	char str[20] = "Linguagem C";
	int i;
	for(i=strlen(str)-1; i>=0; i--){
		printf("%c", str[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
