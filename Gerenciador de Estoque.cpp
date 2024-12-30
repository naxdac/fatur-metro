#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
		
	setlocale (LC_ALL, "Portuguese");
	
	// Segunda parte do c�digo

	int opcao;
	char nomebusca[50];
	printf("Pressione uma tecla para come�ar!! \n");
	getchar ();
	
	do {
	
	printf("\n\n<<<<<<<<<<<<<<<<<<<< MENU INICIAL >>>>>>>>>>>>>>>>>>>>\n\n");
	printf("1 - Cadastrar novo item.\n");
	printf("2 - Procurar item cadastrado.\n");
	printf("3 - Vendas realizadas no m�s.\n");
	printf("4 - Consultar produtos em estoque.\n");
	printf("5 - Relat�rio.\n");
	printf("6 - Dar baixa no estoque do m�s.\n");
	printf("7 - Calcular imposto do produto.\n");
	printf("8 - Registrar lista de futuros produtos.\n");
	printf("9 - Converter valor em Dolar(USD).\n");
	printf("10 - Sair.\n\n");
	
	printf("Escolha uma op��o: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
		printf("\n[Op��o 1] Cadastrar um novo item selecionada.\n\n");
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
	
		printf("Digite o valor que foi pago por pe�a:");
		scanf("%f", &valorent);
	
		printf("Qual ser� a porcentagem da margem de lucro:");
		scanf("%f", &margem);
	
			// C�lculos
		valorsai = valorent * (margem / 100 + 1);
		invest = quant * valorent;  // Investimento total
		lucro = (valorsai * quant) - invest;  // C�lculo do lucro l�quido
	
		printf("\nO Item �: %s \n", item);
		printf("A quantidade em estoque �: %d \n", quant);
		printf("Foi pago por pe�a: R$ %.2f \n", valorent);
		printf("Com a porcentagem de %.1f%% sera vendido por: R$ %.2f \n\n", margem, valorent * (margem / 100 +1));
	
		getchar();
	
		printf("Confirme com S Para Sim e N Para N�o. \n");
		scanf("%c", &conf);
		getchar();
		if (conf == 'S' || conf == 's' ){

		}else if (conf == 'N' || conf == 'n'){
			printf("Vamos corrigir esses dados...\n\n");
		} 
		}while (conf == 'N' || conf == 'n');
		
           //exibi��o final
 	
		printf("\nOkay, item cadastrado.\n\n");
	
		printf("Item: -------------------------- %s \n", item);
		printf("Valor: ------------------------- R$ %.2f \n", valorsai);
		printf("Quantidade em estoque: --------- %d \n", quant);
		printf("Seu investimento foi de: ------- R$ %.2f\n", invest = (quant * valorent));
		printf("Previs�o de faturamento �: ----- R$ %.2f \n", quant * valorsai);
		printf("Seu lucro liquido ser�: -------- R$ %.2f \n\n\n", lucro);
	getchar();
	break;
	
	case 2:
		printf("\n[Op��o 2] Procurar Item Cadastrado\n\n");
		printf("Digite o Item que voc� est� procurando: \n\n");
		getchar();
		gets(nomebusca);
		break;
		
	case 3:
		printf("\n[Op��o 3] Vendas realizadas no m�s atual. (do dia 1 ao ultimo dia)\n\n");
		printf("Relatorio: ...\n\n");
		
		break;
		
	case 4:
		printf("\n[Op��o 4] Produtos em estoque: \n\n");
	
		break;
		
	case 5:
		printf("\n[Op��o 5] Relat�rio dos seus produtos: \n\n");
		break;
		
	case 6:
		printf("[Op��o 6] Vamos dar baixa nos produtos deste m�s e come�ar de novo.\n\n");
		break;
		
	case 7:
		printf("[Op��o 7] Vamos Calcular o imposto do seu produto.\n");
		printf("\nPara darmos inicio a nossa calculadora, digite o produto que ir� ser calculado: \n");
		break;
		
	case 8:
		printf("\n[Op��o 8] Vamos listar os produtos que voc� irar adquirir em breve e cadastrar: \n");
	
		break;
		
	case 9:
		printf("\n[Op��o 9] Aqui est� a calculadora para converter o seu valor em D�lar(USD)\n");
		break;
	
	case 10:
		break;
		
	default:
		printf("\nOp��o invalida!\nPor favor, tente novamente. :') \n\n\n");
			break;
	}
	}while (opcao != 10);


	return 0;

}
