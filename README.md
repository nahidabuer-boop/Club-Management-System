A simple, lightweight console-based campus club management system written in standard C++. This application provides essential functionality to manage club information and member records for student organizations.
Features
✅ Set up basic club information (name and category/type)
✅ Add new club members with student ID, full name and position/role
✅ Display all members in a formatted table view
✅ Search for a specific member by student ID
✅ Remove a member from the club roster
✅ Calculate and display the total number of club members
✅ Clean, intuitive text-based user interface
Tech Stack
Language: C++ (C++11 and later compatible)
Libraries: Standard Template Library (STL) only
vector for dynamic member list management
string for text handling
iomanip for formatted output
No external dependencies required
Quick Start
Prerequisites
Any C++ compiler that supports C++11 standard or newer:
GCC (g++)
Clang
Microsoft Visual C++ (MSVC)
MinGW-w64
Compilation & Execution
Download the main.cpp file from this repository
Open your terminal/command prompt in the file directory
Compile the source code:
bash
运行
g++ main.cpp -o club_management_system
Run the executable:
Windows:
cmd
club_management_system.exe
Linux/macOS:
bash
运行
./club_management_system
Usage Guide
The program presents a numbered main menu. Enter the corresponding number to select an operation:
表格
Option	Function	Description
1	Set Club Information	Configure the club's name and type (e.g., "Robotics Club", "Academic")
2	Add Member	Enter a new member's student ID, name and role (e.g., "President", "Member")
3	View All Members	Display a formatted table of all registered club members
4	Search Member	Find and display a member's details using their student ID
5	Remove Member	Delete a member from the club using their student ID
6	Count Members	Show the current total number of club members
0	Exit	Close the application
Important Note: The current implementation uses cin >> for input, which does not support spaces in names or roles. Please use underscores (_) or hyphens (-) instead (e.g., "John_Doe", "Vice_President").
Code Architecture
The project follows a modular object-oriented design with three core classes:
1. Member Class
Encapsulates individual member data: student ID, name and role
Provides getter methods for data access
Includes a showInfo() method to display formatted member details
2. Club Class
Manages club-level information: name, type and member list
Uses a vector<Member> to dynamically store all members
Provides methods to add members and display the complete member roster
3. Admin Class
Implements administrative operations
Contains logic for searching members, deleting members and counting total members
Operates on a Club object passed by reference
Helper Functions
menu(): Renders the main user interface
main(): Program entry point, handles user input and menu navigation loop
Planned Enhancements
Data persistence (save/load member data to/from text files or CSV)
Support for multiple clubs
Input validation and error handling
Support for names and roles containing spaces
Edit existing member information
Sort members by student ID, name or role
Export member list to CSV format
Password protection for administrative functions
License
This project is released under the MIT License. You are free to use, modify and distribute the code for both personal and commercial purposes.
