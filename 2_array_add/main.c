#include <stdio.h>
#include <stdlib.h>

void receive_values(int *num_pointer, char letter);
void sum_values(int *num_pointer_a, int *num_pointer_b, int *sum_pointer);
void show_values(int *sum_pointer);

int main()
{
    int vector_a[10], vector_b[10], sum_vector[10];
    char letter_a = 'A';
    char letter_b = 'B';

    printf("Digite 10 valores para A:\n");
    receive_values(vector_a, letter_a);

    printf("\nDigite 10 valores para B:\n");
    receive_values(vector_b, letter_b);

    sum_values(vector_a, vector_b, sum_vector);

    show_values(sum_vector);

    getch();
    return 0;
}

void receive_values(int *num_pointer, char letter)
{
    int i;
    for(i=0; i<10; i++, num_pointer++)
    {
        printf("Group [%c] [%i]: ", letter, (i+1));
        scanf("%i", num_pointer);
    }
}

void show_values(int *sum_pointer)
{
    int i;

    printf("\n\nAdditions: \n");
    for(i=0; i<10; i++, sum_pointer++)
    {
        printf("\nSOMA [%i]: %i", (i+1), *(sum_pointer));
    }
}

void sum_values(int *num_pointer_a, int *num_pointer_b, int *sum_pointer)
{
    int i;

    for(i=0; i<10; i++, num_pointer_a++, num_pointer_b++, sum_pointer++)
    {
        *sum_pointer = (*num_pointer_a) + (*num_pointer_b);
    }
}