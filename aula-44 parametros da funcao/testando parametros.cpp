#include <stdio.h>
#include <stdlib.h>
float raiz(float r);
int soma(int x, int y);

int main(){
	float k, w = 5.4;	
	k = raiz(w);
	k = raiz(5.4);
	k = raiz(); //erro, n�o est� passando nenhum par�metro
	k = raiz(w, 5.4); //erro, a fun��o recebe somente um par�metro
	
	int x, y = 1, z = 2;
	x = soma(y, z); //correto, passando dois par�metros tipo inteiro
	x = soma (1, 2); //correto, passando dois par�metros tipo inteiro
	x = soma(y, 2); //correto, passando dois par�metros tipo inteiro
	
	return 0;
}
