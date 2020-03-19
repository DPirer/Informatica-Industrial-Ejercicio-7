#include <stdio.h>

// Pedro Antonio Estévez Pérez

// Ejercicio 7

/* Crear un programa que imprima en pantalla los elementos de un
 * vector de enteros y su multiplicación, accediendo a ellos únicamente
 * mediante aritmética de punteros.*/

int main(void)
{
    int longitud, i;
    while (1)
    {
        printf("Introduce la longitud del vector: ");
        scanf("%d", &longitud);
        if (longitud <= 0)
            printf("Introduce una longitud valida.\n");
        else
            break;
    }

    int vector[longitud];
    int *pvector;
    pvector = &vector[0];

    for (i=0; i<longitud; i++)
    {
        printf("Introduce el elemento %d: ", i);
        scanf("%d", &*(pvector+i));
    }

    int por = 1;
    printf("El vector es: [ ");
    for (i=0; i<longitud; i++)
    {
        printf("%d ", *(pvector+i));
        por = por * (*(pvector+i));
    }
    printf("]\n");
    printf("La multiplicacion es: %d\n\n", por);
}
