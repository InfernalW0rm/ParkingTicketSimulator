#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

using namespace std;

int main() 
{
    
    ParkedCar car("Toyota", "Camry", "Grey", "ABC123", 120); 

    
    ParkingMeter meter(60); 
    

    PoliceOfficer officer("John Doe", 12345);

    
    ParkingTicket* ticket = officer.inspectCar(car, meter); 

    if (ticket != nullptr) 
    {
        cout << *ticket;
        delete ticket;
    }
    else 
    {
        cout << "No parking violations.\n";
    }

    return 0;
}
