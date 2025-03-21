//
// Created by Brando on 14/03/2025.
//
#include <iostream>
#include <ostream>
#include <Table.h>

#include <utility>

// Constructor Implementation
Table::Table(std::string name)
{
    this->name = name;
}

void Table::setAttribute(std::string attribute)
{
    attributes.push_back(attribute);
}

std::string Table::getTableNameAndHeaders()
{
    std::string nameAndHeaders = name;

    // Create a vector iterator called it
    std::vector<std::string>::iterator it;

    // Loop through the vector with the iterator
    for (it = attributes.begin(); it != attributes.end(); ++it) {
        nameAndHeaders = nameAndHeaders + " " + *it;
    }
    return nameAndHeaders;
}
//Car::Car(std::string brand, int speed) : brand(brand), speed(speed) {}