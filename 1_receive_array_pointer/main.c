// Receber e imprimir valores de uma matriz
#include <stdio.h>

void receive_numbers(int *num_point);
void show_numbers(int *num_point);

void main()
{
    int num[5];
    printf("Digite 5 numeros:\n");
    receive_numbers(num);
    show_numbers(num);
}

void receive_numbers(int *num_point)
{
    //num_point has the address for num
    int i;
    for(i=0; i<5; i++, num_point++)
    {
        printf("[%i] Numero: ", i+1);
        scanf("%i", num_point);
    }
}

void show_numbers(int *num_point)
{
    int i;
    for(i=0; i<5; i++, num_point++)
    {
        printf("\n[%i] Digitado: %i", (i+1), (*num_point));
    }
}