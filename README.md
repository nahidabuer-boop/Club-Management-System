Campus Club Management System
Project Introduction
This project implements a simple, lightweight console-based campus club management system using standard C++. It provides all essential functionalities for managing student club information and member records, with a clean and intuitive text-based user interface.
Main Features
• Set up basic club information (name and category/type)• Add new club members with student ID, full name and position/role• Display all members in a neatly formatted table view• Search for a specific member by student ID• Remove a member from the club roster• Calculate and display the total number of club members• No external dependencies, only uses C++ Standard Template Library
Environment Requirements
• C++ compiler supporting C++11 standard or newer (GCC / MinGW / MSVC / Clang)• No additional libraries or dependencies required
File Description
main.cpp # Main source code of the campus club management system
How to Use
Run the compiled executable, then enter the corresponding number in the main menu to select an operation:
Set Club Information: Configure the club's name and type
Add Member: Enter a new member's student ID, name and role
View All Members: Display all registered members in a formatted table
Search Member: Find a member using their student ID
Remove Member: Delete a member from the club by student ID
Count Members: Show the current total number of club members
Exit: Close the application
Note: The current implementation uses cin >> for input, which does not support spaces in names or roles. Please use underscores (_) or hyphens (-) instead (e.g., "Li_Ming", "Vice_President").
Compile & Run
Compile command (Windows / Linux / macOS):
bash
运行
g++ main.cpp -o club_management
Run:
Windows:
cmd
club_management.exe
Linux / macOS:
bash
运行
./club_management
Operation Instruction
• The program will display a numbered main menu after startup• Enter the number corresponding to the operation you want to perform• Follow the on-screen prompts to enter required information• After each operation, press any key to return to the main menu• Enter 0 to exit the program safely
