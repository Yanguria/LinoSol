#ifndef LINOSOL_H
#define LINOSOL_H
#include <vector>
// Defining the Meshing Function to return the meshed 1-D line without labelling centroids.
std::vector<double> mesh_1d(double L, double n) {
    std::vector<double> mesh(2*n+1);

    for(int i = 0; i < 2*n+1; i++) {
        mesh[i] = static_cast<double> (i*L/(2*n)); // Casting double point precision
    }

    return mesh;
}





#endif //LINOSOL_H
