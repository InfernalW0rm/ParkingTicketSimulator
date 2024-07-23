#include "PoliceOfficer.h"

PoliceOfficer::PoliceOfficer(const string& name, int badgeNumber) : name(name), badgeNumber(badgeNumber) {}

ParkingTicket* PoliceOfficer::inspectCar(const ParkedCar& car, const ParkingMeter& meter) const 
{
    int illegalMinutes = car.getParkedMinutes() - meter.getPurchasedMinutes();
    if (illegalMinutes > 0) 
    {
        int fine = ParkingTicket::calculateFine(illegalMinutes);
        return new ParkingTicket(car.getMake(), car.getModel(), car.getColor(), car.getLicenseNumber(), fine, name, badgeNumber);
    }
    else 
    {
        return nullptr;
    }
}
