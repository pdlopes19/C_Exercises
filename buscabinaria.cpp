#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int buscabinaria(int vetor[], int tamanho, int x)
{
	bool achou; // var aux p/ busca
	int inicio, meio, fim; // var aux
	
	inicio = 0;
	fim = tamanho - 1;
	achou = false;
	
	while ((inicio <= fim) && (achou == false))
	{
		meio = (inicio + fim) / 2;
		
		if (x < vetor[meio])
			fim = meio - 1;
		
		else
			if (x > vetor[meio])
				inicio = meio + 1;
			
		else
			achou = true;
	}
	
	if(achou)
	{
		printf("Valor %d encontrado na posicao [%d]!\n", x, meio);
		return meio;
	}
	
	else
	{
		printf("Valor %d nao encontrado!\n", x);
		return -1;
	}
		
}

void imprime_vetor(int vetor[], int tamanho)
{
	printf("Vetor utilizado\n\n");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("\n");
}

int main()
{
	
	int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    int valor = 0;
    int posicao;
    
    imprime_vetor(vetor, tamanho);
    posicao = buscabinaria(vetor, tamanho, 5);
    
	return 0;
}