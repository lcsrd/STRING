#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "Portuguese");

	char nome_usuario[50], nome_invertido[50];

	printf("Digite o seu nome: ");
	setbuf(stdin, 0);
	fgets(nome_usuario, 50, stdin);

	printf("\nO nome inserido foi: %s", nome_usuario);

	printf("O nome inserido invertido: ");
	for(int i=strlen(nome_usuario)-1; i>=0; i--){
		printf("%c", nome_usuario[i]);
	}

}
