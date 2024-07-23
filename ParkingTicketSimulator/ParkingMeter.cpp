#include "ParkingMeter.h"

ParkingMeter::ParkingMeter(int purchasedMinutes) : purchasedMinutes(purchasedMinutes) {}

int ParkingMeter::getPurchasedMinutes() const
{
    return purchasedMinutes;
}
