#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter 
{
private:
    int purchasedMinutes;

public:
    ParkingMeter(int purchasedMinutes);

    int getPurchasedMinutes() const;
};

#endif
