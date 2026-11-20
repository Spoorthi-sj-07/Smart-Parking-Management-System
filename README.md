# Smart-Parking-Management-System

1. Project Overview

The Smart Parking Management System is a C programming-based project designed to manage vehicle parking efficiently. It helps users park vehicles, view parking slot availability, and remove vehicles from parking slots.

The system uses a simple menu-driven interface and manages parking information using structures and functions in C.

2. Objectives

- To manage vehicle parking digitally.
- To assign available parking slots to vehicles.
- To display occupied and available parking slots.
- To remove vehicles when they leave.
- To reduce manual parking management work.

3. Technologies Used

- Programming Language: C
- IDE: Dev-C++
- Version Control: Git
- Collaboration Platform: GitHub

4. Features

1. Park Vehicle: Assigns an available parking slot to a vehicle.
2. Display Parking Slots: Shows all parking slots and their current status.
3. Remove Vehicle: Removes a vehicle from its assigned slot.
4. Parking Summary: Displays the total, occupied, and available slots.
5. Exit: Closes the application.

5. Project Structure

Smart-Parking-Management-System/
│
├── main.c
├── parking.h
├── park_vehicle.c
├── display_slots.c
├── vehicle_operations.c
└── README.md

6. Team Members and Responsibilities

Member| Responsibility
Member 1| Parking vehicle functionality
Member 2| Display parking slots
Member 3| Remove vehicle functionality

7. How to Run the Project

Using Dev-C++

1. Open Dev-C++.
2. Create or open the project.
3. Add all ".c" source files and the "parking.h" header file.
4. Compile the project.
5. Run the program.

Using GCC

Compile all source files together:

gcc main.c park_vehicle.c display_slots.c vehicle_operations.c -o parking

Run on Windows:

parking.exe

8. Sample Output

===== SMART PARKING MANAGEMENT SYSTEM =====

1. Park Vehicle
2. Display Parking Slots
3. Remove Vehicle
4. Exit

Enter your choice: 1

Enter vehicle number: KA01AB1234

Vehicle parked successfully!
Assigned Slot Number: 1

9. Concepts Used

- Structures
- Arrays
- Functions
- Loops
- Conditional statements
- Header files
- String handling
- Modular programming
- Git and GitHub collaboration

10. Future Enhancements

- Add vehicle parking fee calculation.
- Store parking records in files.
- Add date and time tracking.
- Develop a graphical user interface.
- Introduce database connectivity.

11. Conclusion

The Smart Parking Management System demonstrates how C programming concepts can be used to solve a real-world parking management problem. It provides a simple and organized way to manage parking slots and vehicle operations.

---

Project: Smart Parking Management System
Language: C
Project Type: Collaborative Team Project
