#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quicksort(int vetor[], int tamanho, int i, int j)
{
    int trab,esq,dir,pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir)/2.0)];
    
    do
    {
        while (vetor[esq] < pivo)
            esq++;
            
        while (vetor[dir] > pivo)
            dir--;
            
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
        
    } while (esq <= dir);
    
    if (dir-i >= 0)
        quicksort(vetor,tamanho,i,dir);
        
    if (j-esq >= 0)
        quicksort(vetor,tamanho,esq,j);
        
}


int main()
{
    int vetor[10];
    int len = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Vetor desordenado\n");
    
    for (int i = 0; i < len; i++)
    {
        vetor[i] = rand() % 10;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("\n");
    
    quicksort(vetor, len, 0, len-1);
    
    printf("Vetor ordenado\n");
    
    for (int i = 0; i < len; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
