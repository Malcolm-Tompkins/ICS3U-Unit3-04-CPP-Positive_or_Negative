// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 29, 2021
// Determines the sign of user input integers

#include <iostream>

main() {
    // Function that determines the sign
    int user_int;

    // User input
    std::cout << "Input an integer: ";
    std::cin >> user_int;

    // Process
    if (user_int > 0) {
        std::cout << "\n" << user_int;
        std::cout << " is a positive number";
    } else if (user_int < 0) {
        std::cout << "\n" << user_int;
        std::cout << " is a negative number";
    } else {
        std::cout << "\n" << user_int;
        std::cout << " zero has no sign";
    }
}
