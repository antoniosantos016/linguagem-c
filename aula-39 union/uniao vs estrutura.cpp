#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct tipoS{
	short int x;
	unsigned char c;
};

union tipoU{
	short int x;
	unsigned char c;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct tipoS s1;
	union tipoU u1;
	
	printf("%d bytes estrutura\n", sizeof(struct tipoS));
	printf("%d bytes união\n", sizeof(union tipoU));
	
	system("pause");
	return 0;
}
