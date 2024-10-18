#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct aluno{
	char nome[80];
	char RA[7];
	float nota[2];
	float media;
}aluno;

void menu(); //PODE TIRAR

void aloca(aluno **p, int q);
void cadastro(aluno *ptr);
int busca(aluno *ptr, int q);
void controle(aluno *ptr);

void main()
{
	aluno *ptr = NULL;
	int op, q=0;
	do{
		system("cls");
		printf("MENU DE ALUNOS\n\n[1]Cadastro\n[2]Controle de notas\n[3]Sair\nOpcao: ");
		scanf("%i", &op);
		switch(op)
		{
			case 1: aloca(&ptr, q+1);
					cadastro(ptr+q);
					q++;
					break;
					
			case 2: printf("op 2");
					break;
					
			case 3: break;
			
			default:system("cls"); 
					printf("\nESCOLHA UMA OPCAO REAL...\n\n");
					system("pause");
					break;
		}
	} while(op!=3);
}//main

void menu(){}//menu PODE TIRAR

void aloca(aluno **p, int q){
	if((*p = (aluno*)realloc(*p, q*sizeof(aluno))) == NULL)
	{
		printf("\n\nALOCACAO FALHOU...");
	}
}//aloca

void cadastro(aluno *ptr){
	system("cls");
	printf("CADASTRO DE ALUNO\n\nNome: ");
	scanf(" %[^\n]", ptr->nome);
	fflush(stdin);
	printf("\nRA: ");
	gets(ptr->RA);
	fflush(stdin);
	
	int i;
	for(i=0; i<2; i++){
		ptr->nota + i = 0; //DANDO ERRO
	}
	ptr->media = 0;
	
	printf("\n\n\n%s\n%s\n%i\n%i\n%i", ptr->nome, ptr->RA, ptr->nota, ptr->nota+1; ptr->media);
}//cadastro

int busca(aluno *ptr, int q){}//busca (retorna RA)

void controle(aluno *ptr){}//controle
