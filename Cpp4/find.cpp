#include <iostream>

bool rechercher(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return true; // Valeur trouvée
        }
    }
    return false; // Valeur non trouvée
}

int main() {
    int tableau[] = {3, 8, 15, 23, 42};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int valeurRecherchee;

    std::cout << "Entrez une valeur à rechercher : ";
    std::cin >> valeurRecherchee;

    if (rechercher(tableau, taille, valeurRecherchee)) {
        std::cout << "Valeur trouvée dans le tableau.\n";
    } else {
        std::cout << "Valeur non trouvée dans le tableau.\n";
    }

    return 0;
}
