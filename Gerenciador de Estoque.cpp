#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
		
	setlocale (LC_ALL, "Portuguese");
	
	// Segunda parte do código

	int opcao;
	char nomebusca[50];
	printf("Pressione uma tecla para começar!! \n");
	getchar ();
	
	do {
	
	printf("\n\n<<<<<<<<<<<<<<<<<<<< MENU INICIAL >>>>>>>>>>>>>>>>>>>>\n\n");
	printf("1 - Cadastrar novo item.\n");
	printf("2 - Procurar item cadastrado.\n");
	printf("3 - Vendas realizadas no mês.\n");
	printf("4 - Consultar produtos em estoque.\n");
	printf("5 - Relatório.\n");
	printf("6 - Dar baixa no estoque do mês.\n");
	printf("7 - Calcular imposto do produto.\n");
	printf("8 - Registrar lista de futuros produtos.\n");
	printf("9 - Converter valor em Dólar(USD).\n");
	printf("10 - Sair.\n\n");
	
	printf("Escolha uma opção: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
		printf("\n[Opção 1] Cadastrar um novo item selecionada.\n\n");
			getchar();
			
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
	
		printf("Digite o valor que foi pago por peça:");
		scanf("%f", &valorent);
	
		printf("Qual será a porcentagem da margem de lucro:");
		scanf("%f", &margem);
	
			// Cálculos
		valorsai = valorent * (margem / 100 + 1);
		invest = quant * valorent;  // Investimento total
		lucro = (valorsai * quant) - invest;  // Cálculo do lucro líquido
	
		printf("\nO Item é: %s \n", item);
		printf("A quantidade em estoque é: %d \n", quant);
		printf("Foi pago por peça: R$ %.2f \n", valorent);
		printf("Com a porcentagem de %.1f%% será vendido por: R$ %.2f \n\n", margem, valorent * (margem / 100 +1));
	
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
		printf("Seu lucro líquido será: -------- R$ %.2f \n\n\n", lucro);
	getchar();
	break;
	
	case 2:
		printf("\n[Opção 2] Procurar Item Cadastrado\n\n");
		printf("Digite o Item que você está procurando: \n\n");
		getchar();
		gets(nomebusca);
		break;
		
	case 3:
		printf("\n[Opção 3] Vendas realizadas no mês atual. (do dia 1 ao último dia)\n\n");
		printf("Relatório: ...\n\n");
		
		break;
		
	case 4:
		printf("\n[Opção 4] Produtos em estoque: \n\n");
	
		break;
		
	case 5:
		printf("\n[Opção 5] Relatório dos seus produtos: \n\n");
		break;
		
	case 6:
		printf("[Opção 6] Vamos dar baixa nos produtos deste mês e começar de novo.\n\n");
		break;
		
	case 7:
		printf("[Opção 7] Vamos Calcular o imposto do seu produto.\n");
		printf("\nPara darmos início à nossa calculadora, digite o produto que irá ser calculado: \n");
		break;
		
	case 8:
		printf("\n[Opção 8] Vamos listar os produtos que você irá adquirir em breve e cadastrar: \n");
	
		break;
		
	case 9:
		printf("\n[Opção 9] Aqui está a calculadora para converter o seu valor em Dólar(USD)\n");
		break;
	
	case 10:
		break;
		
	default:
		printf("\nOpção inválida!\nPor favor, tente novamente. :') \n\n\n");
			break;
	}
	}while (opcao != 10);


	return 0;

}
