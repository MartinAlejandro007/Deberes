#include <stdio.h>

int estudiantes[5];
char materias[3][20] = {"Matematica", "Historia", "Lengua"}; 
int notas[5][3];
 
int main()
{
   int i, j;  
    float suma = 0;  
    float promedio; 
    for (i = 0; i < 5; i++) {
        printf("Estudiante %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Ingrese la nota de %s: ", materias[j]);
            scanf("%d", &notas[i][j]);
            suma += notas[i][j];
        }
    }

    return 0;
