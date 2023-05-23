#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    int matriz, fila, columna, n;

    printf("Escribir la cantidad de martrices que se va a generar: " );
    scanf("%d", &matriz);
    printf("Escribir la cantidad de filas que se va a generar: " );
    scanf("%d", &fila);
    printf("Escribir la cantidad de columnas que se va a generar: " ); //subtareas para el usuario
    scanf("%d", &columna);

    int matriz[matriz][fila][columna];

    for (int i = 0; i < matriz; i++)//estructura de la matriz
    {
        for (int j = 0; j < fila; j++)
        {
            for (int k = 0; k < columna; k++)
            {
                matriz[i][j][k] = 0;
            }
            "\n";
        }
        "\n";
    }
    
    getch();
    return 0;
}
