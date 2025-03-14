//
// Created by Brando on 14/03/2025.
//

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int speed;

public:
    // Constructor
    Car(std::string brand, int speed);

    // Method to increase speed
    void accelerate(int amount);

    // Method to display car details
    void display() const;
};
#endif //CAR_H
