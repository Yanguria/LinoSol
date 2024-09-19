#include <iostream>
#include "Grid.h"
#include <vector>
int main() {

    int n = 100; // Cells number
    double L = 29; // Line Length

    Grid_1D grid(n, L);
    grid.Mesher();
    grid.MeshPrint();

}

