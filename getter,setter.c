#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* transform(char* nome){
	nome[0]=toupper(nome[0]);
	return nome;
}

int main(){
	char tipo[100];
	char nome[100];
	char nomeU[100];
	printf("Digite a variavel:\n");
	scanf("%s %s",tipo,nome);
	int i;
	strcpy(nomeU,nome);
//	for(i=0;nome[i]!='\0';i++)
//		nomeU[i]=nome[i];
	nomeU[0]=toupper(nome[0]);

	printf("public %s get%s(){\n	return %s;\n}\n\n",tipo,nomeU,nome);
	printf("public void set%s(%s %s){\n	this.%s=%s;\n}\n\n",nomeU,tipo,nome,nome,nome);

	getchar();
	main();
}
