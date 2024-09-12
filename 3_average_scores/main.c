#include <stdio.h>
#include <stdlib.h>

void entry(float *pointer_1, float *pointer_2);
void average(float *pointer_1, float *pointer_2, float *pointer_average);
void result(float *pointer_average);

void main()
{
    float score_1[10], score_2[10], average_score[10];
    entry(score_1, score_2);
    average(score_1, score_2, average_score);
    result(average_score);
}

void entry(float *pointer_1, float *pointer_2)
{
    int i;
    printf("\nDigite suas notas:");
    
    for (i = 0; i < 10; i++, pointer_1++, pointer_2++)
    {
        printf("\nAluno %i\n", i+1);

        printf("Nota [1]: ");
        scanf("%f", pointer_1);

        printf("Nota [2]: ");
        scanf("%f", pointer_2);
    }   
}

void average(float *pointer_1, float *pointer_2, float *pointer_average)
{
    int i;
    for (i = 0; i < 10; i++, pointer_1++, pointer_2++, pointer_average++)
    {
        *pointer_average = (*pointer_1 + *pointer_2)/2;
    }
    
}

void result(float *pointer_average)
{
    int i;
    for (i = 0; i < 10; i++, pointer_average++)
    {
        printf("\nAluno [%i]: ", i+1);
        if(*pointer_average >= 7)
        {
            printf("APROVADO");
        }
        else if(*pointer_average < 4)
        {
            printf("REPROVADO");
        }
        else
        {
            printf("EXAME");
        }
    }
    
}