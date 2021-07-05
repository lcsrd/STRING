#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
	
	char str[200], str2[200];
	
	printf("Digite alguma frase para deixa-la MAIUSCULA: ");
	setbuf(stdin, 0);
	fgets(str, 200, stdin);
	
	for(int i=0; i<200; i++){
		str2[i] = toupper(str[i]);
	}	
	printf("%s", str2);
}
