// Created by: Shem
// Created on: 11/14/2025
// This program calculates the factorial of a positive number using a loop
// Copyright 2025 Shem
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    // Variables
    std::string user_input;
    int number;
    int counter = 0;
    int factorial = 1;

    std::cout << "Enter a positive whole number: ";
    std::cin >> user_input;

    try {
        // Convert string to float first to detect decimals
        float userFloat = std::stof(user_input);

        // Check if input is a positive whole number
        if (userFloat < 0 || userFloat != static_cast<int>(userFloat)) {
            std::cout << "Enter a whole positive number above 0" << std::endl;
        } else {
            // Safe to convert to int for factorial calculation
            number = static_cast<int>(userFloat);

            // Factorial calculation using do-while loop
            do {
                counter++;
                factorial *= counter;
                std::cout << "Tracking " << counter << " times through loop.\n";
            } while (counter < number);

            std::cout << std::endl;
            std::cout << number << "! = " << factorial << std::endl;
        }

    } catch (const std::invalid_argument) {
        // Handle letters or invalid input
        std::cerr << user_input << " is not a valid number." << std::endl;
    }
}
