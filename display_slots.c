#include <stdio.h>
#include "parking.h"

void displaySlots(ParkingSlot slots[])
{
    int i;
    int available = 0;
    int occupied = 0;

    printf("\n===== PARKING SLOT DETAILS =====\n");

    for (i = 0; i < MAX_SLOTS; i++)
    {
        printf("\nSlot Number: %d",
               slots[i].slotNumber);

        if (slots[i].occupied == 1)
        {
            printf("\nStatus: Occupied");
            printf("\nVehicle Number: %s\n",
                   slots[i].vehicleNumber);
            occupied++;
        }
        else
        {
            printf("\nStatus: Available\n");
            available++;
        }
    }

    printf("\n===== PARKING SUMMARY =====\n");
    printf("Total Slots: %d\n", MAX_SLOTS);
    printf("Occupied Slots: %d\n", occupied);
    printf("Available Slots: %d\n", available);
}