#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	
	int i, valor = 0;
	char palavra[20], inverso[20];
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	for(i = 0; palavra[i]; i++){
		palavra[i] = tolower(palavra[i]);
	}	
	
	strcpy(inverso, palavra);
	
	strrev(inverso);
	
	valor = strcmp(palavra, inverso)	;
	
	if (valor == 0){
		printf("\nA palavra %s é palídroma\n", palavra);
	}else{
		printf("\nA palavra %s não é palídroma\n", palavra);
	}
	
return 0;	
}
