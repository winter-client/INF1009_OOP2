// Package.cpp
#include "Package.h"
#include <iostream>

Package::Package(const std::string& id, const std::string& destination, int hours, int minutes)
    : DataManager(id, destination, hours, minutes) {}

void Package::display() const {
    std::cout << "Package ID: " << getId() << ", Destination: " << getDestination()
        << ", Timing: " << getTiming().toString() << std::endl;
}