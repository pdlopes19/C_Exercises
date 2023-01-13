#include <stdio.h>

int main(int argc, char** argv)
{
	int numero_do_armazem;
	int numero_do_produto;
	int quantidade_a_ser_retirada;
	
	int estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90}, {250,300,0,200,150}, 
	{300,100,90,450,0},{350,300,400,250,200}};
	
	printf("Estoque antes das operacoes\n");
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%d ", estoque[i][j]);
		}
		printf("\n");
	}
	
	printf("\nNumero do armazem (0-4): ");
	scanf("%d", &numero_do_armazem);
	
	while(numero_do_armazem != -1)
	{
		printf("Numero do produto (0-4): ");
		scanf("%d", &numero_do_produto);
		
		printf("Quantidade de produto a ser retirada: ");
		scanf("%d", &quantidade_a_ser_retirada);
		
		if(estoque[numero_do_armazem][numero_do_produto] - quantidade_a_ser_retirada >= 0)
		{
			estoque[numero_do_armazem][numero_do_armazem] -= quantidade_a_ser_retirada;
		}
		
		else
		{
			printf("Estoque com quantidade insuficiente para atender ao pedido\n");
		}
		
		printf("\nNumero do armazem (0-4): ");
		scanf("%d", &numero_do_armazem);
	}
	
	printf("\nEstoque depois das operacoes\n");
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%d ", estoque[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}