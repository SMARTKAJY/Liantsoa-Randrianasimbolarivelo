#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    int N;
    

    std::cout << "Entrez la taille du tableau : ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Taille invalide.\n";
        return 1;
    }

    // Allocation dynamique du tableau
    int* tableau = new int[N];
    std::cout << "Tableau alloué.\n";
    // Initialisation du générateur de nombres aléatoires
    std::srand(std::time(0));

    // Remplissage du tableau avec des valeurs aléatoires
    for (int i = 0; i < N; i++) {
        tableau[i] = std::rand() % 100; // Nombres entre 0 et 99
    }

    // Affichage du tableau
    std::cout << "Tableau généré : ";
    for (int i = 0; i < N; i++) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;

    // Libération de la mémoire
    delete[] tableau;

    return 0;
}
