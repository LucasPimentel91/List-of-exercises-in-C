#include <stdio.h>

int main() {
    char codigo[15];
    float valor[15];
    float valor_total_vista = 0;
    float valor_total_prazo = 0;
    float valor_total_compras = 0;
    float primeira_prestacao;

    // Receber código e valor das transações
    for (int i = 0; i < 15; i++) {
        printf("Digite o código da transação (V - à vista, P - a prazo): ");
        scanf(" %c", &codigo[i]);
        printf("Digite o valor da transação: ");
        scanf("%f", &valor[i]);

        // Verificar o código e atualizar os valores correspondentes
        if (codigo[i] == 'V' || codigo[i] == 'v') {
            valor_total_vista += valor[i];
        } else if (codigo[i] == 'P' || codigo[i] == 'p') {
            valor_total_prazo += valor[i];
        }

        valor_total_compras += valor[i];
    }

    // Calcular o valor da primeira prestação das compras a prazo
    primeira_prestacao = valor_total_prazo / 3;

    // Exibir os resultados
    printf("Valor total das compras à vista: %.2f\n", valor_total_vista);
    printf("Valor total das compras a prazo: %.2f\n", valor_total_prazo);
    printf("Valor total das compras efetuadas: %.2f\n", valor_total_compras);
    printf("Valor da primeira prestação das compras a prazo: %.2f\n", primeira_prestacao);

    return 0;
}

