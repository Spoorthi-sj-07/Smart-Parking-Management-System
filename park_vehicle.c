#include <stdio.h>
#include <string.h>
#include "parking.h"

// Initialize all parking slots
void initializeSlots(ParkingSlot slots[])
{
    int i;

    for (i = 0; i < MAX_SLOTS; i++)
    {
        slots[i].slotNumber = i + 1;
        slots[i].occupied = 0;
        strcpy(slots[i].vehicleNumber, "Empty");
    }
}

// Park a vehicle
int parkVehicle(ParkingSlot slots[], char vehicleNumber[])
{
    int i;

    for (i = 0; i < MAX_SLOTS; i++)
    {
        if (slots[i].occupied == 0)
        {
            slots[i].occupied = 1;

            strcpy(slots[i].vehicleNumber,
                   vehicleNumber);

            printf("\nVehicle parked successfully!");
            printf("\nAssigned Slot Number: %d\n",
                   slots[i].slotNumber);

            return slots[i].slotNumber;
        }
    }

    printf("\nSorry! Parking is FULL.\n");
    return -1;
}
