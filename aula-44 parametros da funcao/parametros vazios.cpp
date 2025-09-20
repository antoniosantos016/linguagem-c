#include <stdio.h>
//protótipos
float leitura(); //sem especificação ignora qualquer parâmetro passado
int le_arquivo(void); //da erro se for passado algum parâmetro

int main(){
	/*Funções sem parâmetros:
	bastar deixar a lista vazia ou colocar a palavra void no lugar*/
	float y;
	y = leitura();
	y = leitura(5);
	y = leitura(5, 'a');
	
	int x;
	x = le_arquivo();
	x = le_arquivo(5);
	return 0;
}
