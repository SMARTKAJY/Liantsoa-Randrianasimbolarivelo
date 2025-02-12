#include <iostream>

int main() {
    int age;
    std::cout << "Veuillez entrer votre âge : ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "Vous êtes mineur." << std::endl;
    } else if (age >= 18 && age <= 60) {
        std::cout << "Vous êtes adulte." << std::endl;
    } else {
        std::cout << "Vous êtes senior." << std::endl;
    }

    return 0;
}