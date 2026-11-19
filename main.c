#include <stdio.h>
#include "parking.h"

int main()
{
    ParkingSlot slots[MAX_SLOTS];
    int choice, slotNumber;
    char vehicleNumber[20];

    initializeSlots(slots);

    while (1)
    {
        printf("\n===== SMART PARKING MANAGEMENT SYSTEM =====\n");
        printf("1. Park Vehicle\n");
        printf("2. Display Parking Slots\n");
        printf("3. Remove Vehicle\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter vehicle number: ");
                scanf("%19s", vehicleNumber);

                parkVehicle(slots, vehicleNumber);
                break;

            case 2:
                displaySlots(slots);
                break;

            case 3:
                printf("Enter slot number: ");
                scanf("%d", &slotNumber);

                removeVehicle(slots, slotNumber);
                break;

            case 4:
                printf("\nThank you!\n");
                return 0;

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}
