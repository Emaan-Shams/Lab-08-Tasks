#include <stdio.h>
int main() {
    int i, j, rows = 5, cols = 5;
    printf("Seating Chart (O = Occupied, E = Empty):\n\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                printf(" O ");  
            } else {
                printf(" E ");  
            }
        }
        printf("\n");
    }
    return 0;
}

