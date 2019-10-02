// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: September 2019
// This program calculates the volume of a cylinder in mm

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    float radius;
    float height;
    float volume;

    // input
    std::cout << "We will be calculating the volume of a cylinder. "
    << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;
    std::cout << "Enter the height (mm): ";
    std::cin >> height;

    // process
    volume = (M_PI*pow(radius, 2))*height

    // output
    ; std::cout << "" << std::endl;
    std::cout << "The volume is " << (volume) << "mm³." << std::endl;
}
