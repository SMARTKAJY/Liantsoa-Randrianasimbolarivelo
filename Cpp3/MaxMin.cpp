#include <iostream>

int max_tableau(int tab[], int taille) {
    int max = tab[0];
    for (int i = 1; i < taille; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

int min_tableau(int tab[], int taille) {
    int min = tab[0];
    for (int i = 1; i < taille; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

int main() {
    int tab[] = {3, 7, 2, 9, 5};
    int taille = sizeof(tab) / sizeof(tab[0]);

    std::cout << "Le maximum est : " << max_tableau(tab, taille) << std::endl;
    std::cout << "Le minimum est : " << min_tableau(tab, taille) << std::endl;

    return 0;
}
