#include <stdio.h>
int main() {
    int cinema[3][3] = {{1, 0, 1}, {0, 0, 1}, {1, 1, 0}};
    int availableCount = 0;
    printf("Available seats:\n");
    for (int row = 0; row < 3; row++){
        for (int seat = 0; seat < 3; seat++) {
            if (cinema[row][seat] == 0) {
                availableCount++;
                printf("Row %d, Seat %d\n", row + 1, seat + 1);
            }
        }
    }
    printf("\nTotal available seats: %d\n", availableCount);
    return 0;
}

