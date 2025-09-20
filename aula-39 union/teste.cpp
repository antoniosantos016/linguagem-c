#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct tipoS{
	
	short int x; //16 bits (2 bytes)
	unsigned char c; //1 bit (1 byes)
};

union tipoU{
	short int x; //16 bits (2 bytes)
	unsigned char c; //8 bits (1 byte)
	unsigned char b;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct tipoS s1;
	union tipoU u1;
	
	printf("%d bytes estrutura\n", sizeof(struct tipoS));
	printf("%d bytes união\n", sizeof(union tipoU));
	
	/*u1.x = 5;
	
	printf("%d int da união\n", u1.x);*/
	
	u1.c = 'x';
	u1.b = 'a';
	
	printf("%c char da união\n", u1.c);
	printf("%c char da união\n", u1.b);	
	system("pause");
	return 0;
}
