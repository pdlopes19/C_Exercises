#include <stdio.h>

int main()
{
	float projeto[10];
	
	struct
	{
		int codigo_do_projeto;
		float valor_da_transacao;
		char tipo_da_transacao;
	} transacao;
	
	for(int i = 0; i < 10; i++)
	{
		projeto[i] = 0.0;
    }
	
	printf("Codigo do projeto: ");
	scanf("%d", &transacao.codigo_do_projeto);
	
	while(transacao.codigo_do_projeto != -1)
	{
		printf("Valor da transacao: R$");
		scanf("%f", &transacao.valor_da_transacao);
		
		printf("Tipo da transacao (R/D): ");
		scanf(" %c", &transacao.tipo_da_transacao);
		
		if(transacao.tipo_da_transacao == 'R' || transacao.tipo_da_transacao == 'r')
		{
			projeto[transacao.codigo_do_projeto] += transacao.valor_da_transacao;
		}
		
		else
		{
			if(transacao.tipo_da_transacao == 'D' || transacao.tipo_da_transacao == 'd')
			{
				projeto[transacao.codigo_do_projeto] -= transacao.valor_da_transacao;
			}
			
			else
			{
				printf("Tipo de transação não é válido");
			}
			
		}
		
		printf("\nCodigo do projeto: ");
		scanf("%d", &transacao.codigo_do_projeto);
		
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("Saldo do projeto %d = R$%.2f\n", i, projeto[i]);
	}
	
}