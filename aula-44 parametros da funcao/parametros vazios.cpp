#include <stdio.h>
//prot�tipos
float leitura(); //sem especifica��o ignora qualquer par�metro passado
int le_arquivo(void); //da erro se for passado algum par�metro

int main(){
	/*Fun��es sem par�metros:
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
