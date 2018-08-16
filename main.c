#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Change "tamanho"'s value to adapt to array sizes you wish.
#define tamanho 7

void bubbleSort (int vetor[])
{
    int aux;
    int trocas = 0;
    
    for (int i = tamanho - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                
                trocas++;
            }
        }
    }
    
    printf ("O vetor foi ordenado.\n");
    printf ("Trocas realizadas: %i\n", trocas);
}

int isSorted (int vetor[])
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            return (1);
        }
    }
    
    return (0);
}

void preencher (int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%tamanho;
    }
}

void mostrar (int vetor[])
{
    printf ("[");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf (" %i ", vetor[i]);
    }
    
    printf ("]\n");
}

void main()
{
    srand (7);
    
    int vetor[tamanho];
    
    preencher (vetor);
    
    //mostrar (vetor) -- Uncomment if you wish to see arrays
    
    if (isSorted(vetor) == 1)
    {
        bubbleSort(vetor);
    }

    //mostrar (vetor) -- Uncomment if you wish to see arrays
        
}
