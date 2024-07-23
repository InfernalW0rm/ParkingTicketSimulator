#include "ParkedCar.h"

ParkedCar::ParkedCar(const string& make, const string& model, const string& color, const string& licenseNumber, int parkedMinutes)
    : make(make), model(model), color(color), licenseNumber(licenseNumber), parkedMinutes(parkedMinutes) {}

string ParkedCar::getMake() const 
{
    return make;
}

string ParkedCar::getModel() const 
{
    return model;
}

string ParkedCar::getColor() const 
{
    return color;
}

string ParkedCar::getLicenseNumber() const 
{
    return licenseNumber;
}

int ParkedCar::getParkedMinutes() const 
{
    return parkedMinutes;
}
