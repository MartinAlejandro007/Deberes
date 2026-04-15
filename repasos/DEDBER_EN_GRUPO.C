#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int notasalumnos[3][5];
int i, j;
char aprobado[] = "Aprobado";
char reprobado[] = "Reprobado";

int main()
{
    srand(time(NULL));
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            notasalumnos[i][j] = rand() % 10 + 1;
        }
    }

    for(i = 0; i < 3; i++)
    {
        printf("Alumno %d:\n", i + 1);
        for(j = 0; j < 5; j++)
        {
            if(notasalumnos[i][j] >= 6)
            {
                printf("  Nota %d: %d - %s\n", j + 1, notasalumnos[i][j], aprobado);
            }
            else
            {
                printf("  Nota %d: %d - %s\n", j + 1, notasalumnos[i][j], reprobado);
            }
        }
        printf("\n");
    }
    return 0;
}
 