// Learning realloc
// how to: void* realloc(*ptr, size);
// ptr: corresponde a um ponteiro para o tipo void, aponta para o bloco original de memória
// size: corresponde a um inteiro sem sinal, especifica o novo tamanho desejado, em bytes
#include <stdio.h>
#include <stdlib.h> // Obrigatório

void aloca(int **p, int tam);

int main()
{
    int *ptr=NULL, newsize=10;

    aloca(&ptr, 1);

    return 0;
}

void aloca(int **p, int tam)
{
    printf("\nEndereco p = %u - Conteudo p = %u (Endereco ptr) - Conteudo ptr = %u",&p,p,*p);

    if((*p = (int*)realloc(*p, tam*sizeof(int))) == NULL)
    {
        exit(1);
    }

    printf("\nEndereco p = %u - Conteudo p = %u (Endereco ptr) - Conteudo ptr = %u",&p,p,*p);
}