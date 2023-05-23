#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int fila, columna;

    printf("Escribir la cantidad de filas que se va a generar: ");
    scanf("%d", &fila);
    printf("Escribir la cantidad de columnas que se va a generar: ");
    scanf("%d", &columna);

    int A[fila][columna];
    srand(time(NULL));

    printf("Matriz original:\n");//estructura de la matriz
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            A[i][j] = rand() % 101;//para que el programa de los numeros
            printf("%d ", A[i][j]);
            
        }
        printf("\n");
    }
    
    printf("Matriz transpuesta:\n");//transpuesta
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