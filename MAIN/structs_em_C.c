#include <stdio.h>
#include <string.h>

struct Pessoa{
	char nome[50];
	int idade;
	char telefone[15];
};

int main(){
	struct Pessoa lista[3];
	int i;
	
	// Preenchendo as informações
	
	strcpy(lista[0].nome, "Luna");
	lista[0].idade = 21;
	strcpy(lista [0].telefone,"12345-6789");
	
	strcpy(lista[1].nome, "Unara");
	lista[1].idade = 8;
	strcpy(lista[1].telefone,"98765-4321");
	
	strcpy(lista[2].nome, "jorge");
	lista[2].idade = 34;
	strcpy (lista[2].telefone,"11111-1111");
	
	//Impriminto as informações
	
	for (i = 0; i < 3; i++){
		printf("nome: %s\n", lista [i].nome);
		printf("idade: %d\n", lista [i].idade);
		printf("telefone: %s\n\n", lista [i].telefone);
	}
	return 0;
}
