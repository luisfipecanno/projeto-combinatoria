#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

void trianguloPascal(void) {
    int linhas;

    printf("\n--- TRIANGULO DE PASCAL ---\n");
    printf("Quantas linhas deseja mostrar? ");
    scanf("%d", &linhas);

    if (linhas < 1 || linhas > 20) {
        printf("Digite uma quantidade entre 1 e 20.\n");
        return;
    }

    for (int i = 0; i < linhas; i++) {
        long long valor = 1;

        for (int espaco = 0; espaco < linhas - i - 1; espaco++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4lld", valor);
            valor = valor * (i - j) / (j + 1);
        }

        printf("\n");
    }
}

void arranjoSimples(void) {
    int n, p;

    printf("\n--- ARRANJO SIMPLES ---\n");
    printf("Digite o total de elementos (n): ");
    scanf("%d", &n);
    printf("Digite quantos elementos serao escolhidos (p): ");
    scanf("%d", &p);

    if (n < 0 || p < 0 || p > n || n > 20) {
        printf("Valores invalidos. Use 0 <= p <= n <= 20.\n");
        return;
    }

    long long resultado = fatorial(n) / fatorial(n - p);
    printf("A(%d, %d) = %lld\n", n, p, resultado);
}

void permutacaoSimples(void) {
    int n;

    printf("\n--- PERMUTACAO SIMPLES ---\n");
    printf("Digite a quantidade de elementos (n): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Digite um valor entre 0 e 20.\n");
        return;
    }

    printf("P(%d) = %lld\n", n, fatorial(n));
}

void combinacaoSimples(void) {
    int n, p;

    printf("\n--- COMBINACAO SIMPLES ---\n");
    printf("Digite o total de elementos (n): ");
    scanf("%d", &n);
    printf("Digite quantos elementos serao escolhidos (p): ");
    scanf("%d", &p);

    if (n < 0 || p < 0 || p > n || n > 20) {
        printf("Valores invalidos. Use 0 <= p <= n <= 20.\n");
        return;
    }

    long long resultado = fatorial(n) / (fatorial(p) * fatorial(n - p));
    printf("C(%d, %d) = %lld\n", n, p, resultado);
}

int main(void) {
    int opcao;

    do {
        printf("\n=================================\n");
        printf(" PROJETO: COMBINATORIA EM C\n");
        printf("=================================\n");
        printf("1 - Triangulo de Pascal\n");
        printf("2 - Arranjo simples\n");
        printf("3 - Permutacao simples\n");
        printf("4 - Combinacao simples\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                trianguloPascal();
                break;
            case 2:
                arranjoSimples();
                break;
            case 3:
                permutacaoSimples();
                break;
            case 4:
                combinacaoSimples();
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
