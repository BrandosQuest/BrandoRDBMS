//
// Created by Brando on 14/03/2025.
//
#include "Car.h"

// Constructor Implementation
Car::Car(std::string brand, int speed) : brand(brand), speed(speed) {}

// Method to increase speed
void Car::accelerate(int amount) {
    speed += amount;
}

// Method to display car details
void Car::display() const {
    std::cout << "Car brand: " << brand << ", Speed: " << speed << " km/h\n";
}