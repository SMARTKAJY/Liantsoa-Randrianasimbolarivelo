#include <iostream>

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    int somme = 0;

    for (int i = 0; i < 5; i++) {
        somme += tab[i];
    }

    std::cout << "La somme des éléments du tableau est : " << somme << std::endl;
    return 0;
}
