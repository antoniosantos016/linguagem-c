#include <stdio.h>
/*Corpo da fun��o:
processa as entradas (par�metros)
gera a sa�da (return) da fun��o
� formada por declara��es e comandos.*/

int fatorial(int n);

int main(){
	//Exemplo: fun��o fatorial
	int x, y;
	printf("Digite o valor de n: ");
	scanf("%d", &x);
	y = fatorial(x);
	printf("\nFatorial de %d = %d", x, y);
	printf("\nFatorial de 20: %d", fatorial(20));
	return 0;
}

int fatorial(int n){
	int i, f = 1;
	for(i = 1; i <= n; i++){
		f = f * i;
	}
	return f;
}
