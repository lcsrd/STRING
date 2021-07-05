#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
    char nome[100];
    int i;
	
    printf("Nome completo: ");
    fgets(nome, 100, stdin);

    strlwr(nome);

    for (i = 0; i < strlen(nome) + 1; i++) {
        if (i == 0 || nome[i - 1] == ' ')
            nome[i] = toupper(nome[i]);
        else
            nome[i] = nome[i];
    }

	printf("\n%s", strrchr(nome, ' ') + 1);
	printf("\n%s", nome);
	
return 0;
}
