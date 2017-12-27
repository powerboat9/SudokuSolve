#include "defs.h"
#include "disp.c"

#include <math.h>

int main(int argc, char **args) {
    Game g;
    for (int i = 0; i < 81; ++i) g[i] = ((char) (random() % 9));
    printBoard(g);
}
