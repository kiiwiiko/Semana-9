#include <stdio.h>
#include <conio.h>

int main()
{
    int fila, columna;

    printf("Escribir la cantidad de filas que se va a generar: ");
    scanf("%d", &fila);
    printf("Escribir la cantidad de columnas que se va a generar: ");
    scanf("%d", &columna);

    int A[fila][columna];

    printf("Ingresar los elementos para la matriz:\n");
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            printf("Ingrese el elemento en la posición [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    
    printf("Matriz transpuesta:\n");
    for (int j = 0; j < columna; j++)
    {
        for (int i = 0; i < fila; i++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}