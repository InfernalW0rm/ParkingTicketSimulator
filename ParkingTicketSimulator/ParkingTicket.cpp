#include "ParkingTicket.h"

ParkingTicket::ParkingTicket(const string& carMake, const string& carModel, const string& carColor, const string& carLicenseNumber, int fine, const string& officerName, int officerBadgeNumber)
    : carMake(carMake), carModel(carModel), carColor(carColor), carLicenseNumber(carLicenseNumber), fine(fine), officerName(officerName), officerBadgeNumber(officerBadgeNumber) {}

int ParkingTicket::calculateFine(int illegalMinutes) 
{
    int hours = (illegalMinutes + 59) / 60;
    return 25 + (hours - 1) * 10;
}

ostream& operator<<(ostream& os, const ParkingTicket& ticket) 
{
    os << "Parking Ticket:\n"
        << "Car Make: " << ticket.carMake << "\n"
        << "Car Model: " << ticket.carModel << "\n"
        << "Car Color: " << ticket.carColor << "\n"
        << "Car License Number: " << ticket.carLicenseNumber << "\n"
        << "Fine: $" << ticket.fine << "\n"
        << "Officer Name: " << ticket.officerName << "\n"
        << "Officer Badge Number: " << ticket.officerBadgeNumber << "\n";
    return os;
}
