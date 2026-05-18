Campus Club Management System
Project Introduction
This project implements a lightweight console-based campus club management system using standard C++. It provides all essential functionalities for managing student club information and member records, with a clean and intuitive text-based user interface. No external dependencies are required.
Main Features
• Set up basic club information (name and category type)
• Add new club members with student ID, full name and position
• Display all members in a neatly formatted table view
• Search for specific members by their student ID
• Remove members from the club roster by student ID
• Calculate and display the total number of club members
• Pure standard C++ implementation with no external dependencies
Environment Requirements
• C++ compiler supporting C++11 standard or newer (GCC / MinGW / MSVC / Clang)
• No additional libraries or dependencies required
File Description
main.cpp # Main source code of the campus club management system
How to Use
Run the compiled executable file
Enter the corresponding number in the main menu to select an operation:
Set Club Information: Configure the club's name and type
Add Member: Enter a new member's student ID, name and role
View All Members: Display all registered members in a formatted table
Search Member: Find a member using their student ID
Remove Member: Delete a member from the club by student ID
Count Members: Show the current total number of club members
Exit: Close the application safely
Follow the on-screen prompts to enter required information
Compile & Run
Compile command (Windows / Linux / macOS):
bash
运行
g++ main.cpp -o club_management
Run:
Windows
club_management.exe
Linux / macOS
./club_management
Operation Instruction
• The program will display a numbered main menu after startup
• Enter the number corresponding to the operation you want to perform
• Follow the on-screen prompts to input necessary information
• Press any key to return to the main menu after each operation
• Enter 0 to exit the program properly
Principle Overview
Adopts a modular object-oriented design with three core classes
Member class encapsulates individual member data and display logic
Club class manages club information and dynamic member list using STL vector
Admin class implements administrative operations including search, delete and count
Main function handles user input and controls program flow through an infinite menu loop
