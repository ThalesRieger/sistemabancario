#include <stdio.h>
#include <stdlib.h>
int main() {
    int saldo = 1000.00;
    int emprestimo = 0.0;
    int opcao;
    int valor;

    while (1) {
    printf("\n CAIXA ELETRONICO \n");
    printf("1. Verificar Saldo\n");
    printf("2. Depositar Valor\n");
    printf("3. Sacar Valor\n");
    printf("4. Pedir Emprestimo\n");
    printf("5. Pagar Emprestimo\n");
    printf("6. Consultar Emprestimo\n");
    printf("7. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
   
    if (opcao == 7) {
            printf("Saindo do sistema.\n");
            break;
    }

        switch (opcao) {
            	case 1:
                printf("\nSeu saldo atual e: R$ %.2d\n", saldo);
                break;
            	case 2:
                printf("Digite o valor para deposito: R$ ");
                scanf("%d", &valor);
                if (valor > 0) {
                saldo += valor;
                printf("Deposito realizado! Novo saldo: R$ %.2d\n", saldo);
            } else {
                printf("Valor invalido.\n");
			}
				break;
				case 3:
					printf("coloque o valor para o saque: R$ ");
					scanf("%d", &valor);
					if (valor > 0){
						saldo -=valor;
					printf("Valor sacado, saldo atual: R$ %2.d\n", saldo);
				   } else {
					printf("valor invalido ou saldo insuficiente\n");
				}
				case 4:
				    if (emprestimo > 0) {
                    printf("Voce ja possui um emprestimo pendente.\n");
                } else {
                    printf("Digite o valor do emprestimo: R$ ");
                    scanf("%d", &valor);
                    if (valor > 0) {
                    emprestimo = valor;
                    saldo += valor;
                    printf("Emprestimo de R$ %.2d aprovado. Novo saldo: R$ %.2d\n", valor, saldo);
                    }}
                    break;
                    
                case 5:
                	
                if (emprestimo == 0) {
                printf("Nao ha emprestimo para pagar.\n");
                } 
				else {
                printf("Emprestimo atual: R$ %.2d. Quanto deseja pagar? R$ ", emprestimo);
                scanf("%d", &valor);
                if (valor > 0 && valor <= saldo && valor <= emprestimo) {
                    saldo -= valor;
                    emprestimo -= valor;
                    printf("Pagamento realizado. Restam R$ %.2d de emprestimo.\n", emprestimo);
                }
				else {
                    printf("Saldo insuficiente ou valor excede o debito.\n");
                }
                }
                break;
            }
        }
    }
