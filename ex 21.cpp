#include <stdio.h>

int main() {
    int numero;
    int cont = 0;

    printf("Digite n�meros (0 para encerrar):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;  
        }

        if (numero >= 100 && numero <= 200) {
            cont++;  // soma ao contador se o n�mero estiver entre 100 e 200
        }
    }

    printf("Quantidade de n�meros entre 100 e 200: %d\n", cont);

    return 0;
}

