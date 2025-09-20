#include <stdio.h>
/*Corpo da função:
processa as entradas (parâmetros)
gera a saída (return) da função
É formada por declarações e comandos.*/

int fatorial(int n);

int main(){
	//Exemplo: função fatorial
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
