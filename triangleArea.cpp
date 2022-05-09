// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-05
// This program calculates area of a triangle using parameters

#include <iostream>
#include <string>

float TriangleArea(float base, float height) {
    // this function calculates area of a triangle

    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "\nThe area of your triangle is " << area
    << " cm²." << std::endl;
}

int main() {
    // this function gets input, calls a function, gives output
    std::string baseString;
    float baseFromUser;
    std::string heightString;
    float heightFromUser;

    // input
    std::cout << "Enter the base of your triangle (cm): ";
    std::cin >> baseString;
    std::cout << "Enter the height of your triangle (cm): ";
    std::cin >> heightString;

    try {
        baseFromUser = std::stof(baseString);
        heightFromUser = std::stof(heightString);
        // call function
        TriangleArea(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        // output
        std::cout << "\nYour values are invalid. Please Re-Run." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
