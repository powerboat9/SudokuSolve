#include <stdlib.h>
#include <stdio.h>

#include "defs.h"

void printBoard(Game g) {
    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            if (g[row * 9 + col] == 99) {
                printf(" ");
            } else {
                printf("%d", g[row * 9 + col]);
            }
        }
        printf("\n");
    }
}
