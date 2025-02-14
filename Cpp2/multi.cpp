#include <iostream>

using namespace std;

int main() {
    int n;

    // Demander un nombre à l'utilisateur
    cout << "Entrez un nombre : ";
    cin >> n;

    // Afficher la table de multiplication
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
