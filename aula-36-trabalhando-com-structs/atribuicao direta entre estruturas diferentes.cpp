#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ponto{
	int x, y;
};

struct novo_ponto{
	int x, y;
};

int main(){
	struct ponto p1, p2 = {1, 2};
	struct novo_ponto p3 = {3, 4};
	
	p1 = p2;
	printf("%d e %d", p1.x, p1.y);
	
	p1 = p3;
	printf("%d e %d", p1.x, p1.y);
}
