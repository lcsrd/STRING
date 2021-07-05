#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void){

	char str1[200], str2[200];

	printf("Insira um nome ou frase: ");
	setbuf(stdin, 0);
	fgets(str1, 200, stdin);

	printf("Insira outro nome ou frase: ");
	setbuf(stdin, 0);
	fgets(str2, 200, stdin);


	strcat(str1, str2);

	//Por algum motivo sempre pula 1 linha entre as concatenações
	printf("Seus nomes/frases concatenadas ficam: %s", str1);

}
