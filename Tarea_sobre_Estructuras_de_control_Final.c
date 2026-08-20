/*
 * Facultad de Ingenieria y Ciencias Aplicadas
 * Ingenieria de Software - Programacion I (ISWZ1102)
 * Programa: Secuencia con incremento usando estructura for
 */
 
#include <stdio.h>
 
int main() {
    int inicio, fin, incremento;
 
    // Solicitar datos al usuario
    printf("=== Generador de Secuencia Numerica ===\n\n");
 
    printf("Ingrese el numero inicial:    ");
    scanf("%d", &inicio);
 
    printf("Ingrese el numero final:      ");
    scanf("%d", &fin);
 
    printf("Ingrese el valor de incremento: ");
    scanf("%d", &incremento);
 
    // Validar que el incremento no sea cero
    if (incremento == 0) {
        printf("\nError: El incremento no puede ser cero.\n");
        return 1;
    }
 
    // Validar coherencia entre inicio, fin e incremento
    if ((incremento > 0 && inicio > fin) || (incremento < 0 && inicio < fin)) {
        printf("\nError: Con ese incremento nunca se alcanzara el numero final.\n");
        return 1;
    }
 
    // Mostrar la secuencia usando FOR
    printf("\nSecuencia generada:\n");
    printf("-------------------\n");
 
    for (int i = inicio; 
         (incremento > 0) ? (i <= fin) : (i >= fin); 
         i += incremento) {
        printf("%d\n", i);
    }
 
    printf("-------------------\n");
    printf("Secuencia finalizada.\n");
 
    return 0;
}
 