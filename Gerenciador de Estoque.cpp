#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	
	//primeira parte do código
	
	setlocale (LC_ALL, "Portuguese");
	char item[50];
	int quant;
	float valorent, margem;
	float valorsai, invest, lucro;
	char conf;

	do {
		
	printf("Digite o Item:");
	gets (item);
	
	printf("Digite a quantidade em estoque:");
	scanf("%d", &quant);
	
	printf("Digite o valor que foi pago:");
	scanf("%f", &valorent);
	
	printf("Qual será a porcentagem da margem de lucro:");
	scanf("%f", &margem);
	
			// Cálculos
		valorsai = valorent * (margem / 100 + 1);
		invest = quant * valorent;  // Investimento total
		lucro = (valorsai * quant) - invest;  // Cálculo do lucro líquido
	
	printf("\nO Item é: %s \n", item);
	printf("A quantidade em estoque é: %d \n", quant);
	printf("Foi pago: R$ %.2f \n", valorent);
	printf("Com a porcentagem de %.1f%% sera vendido por: R$ %.2f \n\n", margem, valorent * (margem / 100 +1));
	
	getchar();
	
	printf("Confirme com S Para Sim e N Para Não. \n");
	scanf("%c", &conf);
		getchar();
	if (conf == 'S' || conf == 's' ){

		}else if (conf == 'N' || conf == 'n'){
			printf("Vamos corrigir esses dados...\n\n");
		} 
		}while (conf == 'N' || conf == 'n');
		
//exibição final
 	
	printf("\nOkay, item cadastrado.\n\n");
	
	printf("Item: -------------------------- %s \n", item);
	printf("Valor: ------------------------- R$ %.2f \n", valorsai);
	printf("Quantidade em estoque: --------- %d \n", quant);
	printf("Seu investimento foi de: ------- R$ %.2f\n", invest = (quant * valorent));
	printf("Previsão de faturamento é: ----- R$ %.2f \n", quant * valorsai);
	printf("Seu lucro liquido será: -------- R$ %.2f \n", lucro);
getchar();

	//fim da primeira parte do código
	
	return 0;

}
