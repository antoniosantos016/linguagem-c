#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>

union tipo{
	short int x; //int de 16 bits, campo(-32.768 até 32.767
	unsigned char c;
};

int main(){
	
	union tipo t;
	t.x = 15;
	
	printf("%hd bytes\n", sizeof(t.x));
	printf("%hd limite maximo\n", SHRT_MAX);
	printf("%hd limite minimo\n", SHRT_MIN);
	
	system("pause");
	return 0;
}
