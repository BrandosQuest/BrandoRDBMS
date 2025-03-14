//
// Created by Brando on 14/03/2025.
//
#include <iostream>
#include <ostream>
#include <Table.h>

#include <utility>

// Constructor Implementation
Table::Table(std::string name) : name(std::move(name))
{
    a=10;
    std::cout << a << std::endl;
}
//Car::Car(std::string brand, int speed) : brand(brand), speed(speed) {}