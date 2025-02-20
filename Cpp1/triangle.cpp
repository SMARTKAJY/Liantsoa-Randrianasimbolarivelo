#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int a, b, c;
    std::cout << "Entrez les trois longueurs des côtés du triangle : "std::endl;
    std::cin >> a >> b >> c;

    // Vérifier si les longueurs peuvent former un triangle
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        std::cout << "Les longueurs saisies ne peuvent pas former un triangle." << std::endl;
        return 1;
    }

    // Classer le triangle
    std::string type;
    if (a == b && b == c) 
    {
        type = "équilatéral";
    } 
    else if (a == b || b == c || a == c) 
    {
        type = "isocèle";
    } 
    else {
        type = "scalène";
    }
    
    std::cout << "Le triangle est " << type << "." << std::endl;

    // Déterminer si le triangle est rectangle
    int sides[3] = {a, b, c};
    std::sort(sides, sides + 3);
    if (std::pow(sides[2], 2) == std::pow(sides[0], 2) + std::pow(sides[1], 2)) {
        std::cout << "Le triangle est également rectangle." << std::endl;
    }

    return 0;
}
