#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ponteiro;
    ponteiro = (int *)malloc(5 * sizeof(int)); // aloca memoria em para 5  inteiros

    if (ponteiro != NULL)
    { // verifica se a alocacao foi bem-sucedida
        int i;
        for (i = 0; i < 5; i++)
        {
            ponteiro[i] = i + 1; // inicia os valores manualmente
        }
        for (i = 0; i < 5; i++)
        {
            printf("%d", ponteiro[i]);
        }
        free(ponteiro); // libera memoria
    }
    else
    {
        printf("erro na alocacao de memoria.\n");
    }

    return 0;
}
