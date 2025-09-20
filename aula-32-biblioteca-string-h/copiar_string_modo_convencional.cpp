#include <stdio.h>
#include <stdlib.h>

int main(){
	//char str1[20] = "Hello World";
	char str1[20] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	char str2[20];
	
	//str1 = str2; Está errado pois não se pode copiar arrays!
	
	int i;
	for(i = 0; str1[i]!='\0'; i++)
		str2[i] = str1[i];
	str2[i] = '\0';
	
	printf("String 2 = %s\n", str2);
	
	system("pause");
	return 0;
}
