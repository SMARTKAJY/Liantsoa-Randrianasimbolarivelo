#include <iostream>

int main() {
    int mat[2][2] = {{1, 2}, {3, 4}};
    int somme = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            somme += mat[i][j];
        }
    }

    std::cout << "La somme des éléments de la matrice est : " << somme << std::endl;
    return 0;
}
