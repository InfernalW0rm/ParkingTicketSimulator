#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include <iostream>

using namespace std;

class ParkingTicket 
{
private:
    string carMake;
    string carModel;
    string carColor;
    string carLicenseNumber;
    int fine;
    string officerName;
    int officerBadgeNumber;

public:
    ParkingTicket(const string& carMake, const string& carModel, const string& carColor, const string& carLicenseNumber, int fine, const string& officerName, int officerBadgeNumber);

    static int calculateFine(int illegalMinutes);

    friend ostream& operator<<(ostream& os, const ParkingTicket& ticket);
};

#endif
