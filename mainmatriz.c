#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int j;
	int encontrou=0;
	char busca[100];
	char nome[4][100];
	printf("digite nomes de 4 empresas \n");
	for(j=0;j<4;j++){
		gets(nome[j]);
	}
	printf("\nempresas cadastradas\n");
	for(j=0;j<4;j++){
		printf("%s\n",nome[j]);
	}
	printf("\nescolha nome de busca\n");
	gets(busca);
	for(j=0;j<4;j++){
		if(strcmp(nome[j],busca)==0){
			printf("encontrou nome %s",nome[j]);
			encontrou=1;
		}
	}
	if(!encontrou){
		printf("nome nao encontrado\n");
	}
	return 0;
}
