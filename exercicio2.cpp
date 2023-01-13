#include <stdio.h>
#include <math.h>

#define POTENCIA_DA_LAMPADA 60
#define POTENCIA_TIPO_0 12
#define POTENCIA_TIPO_1 15
#define POTENCIA_TIPO_2 18
#define POTENCIA_TIPO_3 20
#define POTENCIA_TIPO_4 22

float calcula_area(float largura, float comprimento)
{
	return largura*comprimento;
}

float calcula_numero_de_lampadas(int tipo_de_comodo, float area)
{
	float potencia_fornecida;
	
	switch(tipo_de_comodo)
	{
		case 0:
			potencia_fornecida = POTENCIA_TIPO_0;
			return (area*potencia_fornecida)/POTENCIA_DA_LAMPADA;
			break;
		
		case 1:
			potencia_fornecida = POTENCIA_TIPO_1;
			return (area*potencia_fornecida)/POTENCIA_DA_LAMPADA;
			break;
		
		case 2:
			potencia_fornecida = POTENCIA_TIPO_2;
			return (area*potencia_fornecida)/POTENCIA_DA_LAMPADA;
			break;
		
		case 3:
			potencia_fornecida = POTENCIA_TIPO_3;
			return (area*potencia_fornecida)/POTENCIA_DA_LAMPADA;
			break;
		
		case 4:
			potencia_fornecida = POTENCIA_TIPO_4;
			return (area*potencia_fornecida)/POTENCIA_DA_LAMPADA;
			break;
	}
}

int main(int argc, char** argv)
{
	float area_do_comodo;
	float numero_de_lampadas;
	
	struct 
	{
		int tipo;
		float largura;
		float comprimento;
		
	} comodo;
	
	printf("Tipo do comodo (0-4):");
	scanf("%d", &comodo.tipo);
	
	while(comodo.tipo != -1)
	{
		if(comodo.tipo >= 0 && comodo.tipo <= 4)
		{
			printf("Largura do comodo (m): ");
			scanf("%f", &comodo.largura);
			
			printf("Comprimento do comodo (m): ");
			scanf("%f", &comodo.comprimento);
			
			area_do_comodo = calcula_area(comodo.largura, comodo.comprimento);
			printf("Area do comodo (m2): %.2f\n", area_do_comodo);
			
			numero_de_lampadas = calcula_numero_de_lampadas(comodo.tipo, area_do_comodo);
			printf("Numero de lampadas necessarias: %.0f\n\n", ceilf(numero_de_lampadas));
		}
		
		printf("Tipo do comodo (0-4):");
		scanf("%d", &comodo.tipo);
	}
		
	return 0;
}