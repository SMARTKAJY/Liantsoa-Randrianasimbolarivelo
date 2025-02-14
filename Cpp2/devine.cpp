#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator
    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;

    std::cout << "Devinez un nombre entre 1 et 100 : ";

    do {
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Trop petit ! Essayez encore : ";
        } else if (guess > randomNumber) {
            std::cout << "Trop grand ! Essayez encore : ";
        } else {
            std::cout << "Félicitations, vous avez deviné le nombre !" << std::endl;
        }
    } while (guess != randomNumber);

    return 0;
}