#include <stdio.h>

void convertirMoneda(float monto, float tasaCambio, char *monedaDestino) {
    printf("%.2f convertido es %.2f %s.\n", monto, monto * tasaCambio, monedaDestino);
}

int main() {
    int opcion;
    float monto;

    while (1) {
        printf("\n=== Conversor de Monedas ===\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dólares a Quetzales\n");
        printf("4. Dólares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dólares\n");
        printf("7. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 7) {
            printf("Saliendo del programa.\n");
            break;
        }

        printf("Ingrese la cantidad a convertir: ");
        scanf("%f", &monto);

        switch (opcion) {
            case 1:
                convertirMoneda(monto, 0.13, "USD"); // Quetzales a Dólares
                break;
            case 2:
                convertirMoneda(monto, 0.12, "EUR"); // Quetzales a Euros
                break;
            case 3:
                convertirMoneda(monto, 7.8, "GTQ"); // Dólares a Quetzales
                break;
            case 4:
                convertirMoneda(monto, 0.90, "EUR"); // Dólares a Euros
                break;
            case 5:
                convertirMoneda(monto, 8.6, "GTQ"); // Euros a Quetzales
                break;
            case 6:
                convertirMoneda(monto, 1.1, "USD"); // Euros a Dólares
                break;
            default:
                printf("Opción no válida. Por favor, intente nuevamente.\n");
        }
    }

    return 0;
}
