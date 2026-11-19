#ifndef PARKING_H
#define PARKING_H

#define MAX_SLOTS 10

typedef struct {
    int slotNumber;
    char vehicleNumber[20];
    int occupied;
} ParkingSlot;

void initializeSlots(ParkingSlot slots[]);
int parkVehicle(ParkingSlot slots[], char vehicleNumber[]);
void displaySlots(ParkingSlot slots[]);
int removeVehicle(ParkingSlot slots[], int slotNumber);

#endif
