#include <stdio.h>

int main() { 
    float notas[5][2];
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 2; j++) {
            printf("\nInforme uma nota: ");
            scanf("%f", &notas[i][j]);
    }
}
}