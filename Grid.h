#ifndef GRID_H
#define GRID_H
#include <vector>
// Defining the Meshing Function to return the meshed 1-D line without labelling centroids.
class Grid_1D {
public:
    int n; // Number of cells
    double L; // Length of domain
    std::vector<double> mesh;

    // Constructing the class by specifying correspondences.
    Grid_1D(int n_, double L_) : n(n_), L(L_), mesh(2*n+1){};

    // Meshing function to populate the array.
    void Mesher() {
        for(int i = 0; i < 2*n+1; i++) {
            mesh[i] = static_cast<double> (i*L/(2*n)); // Casting double point precision
        }
    }
    // Array printing function.
    void MeshPrint() {
        for(int i=0; i<2*n+1; i++) {
            std::cout << mesh[i] << std::endl;
        };

    }
};

#endif //GRID_H
