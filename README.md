
# Campus Club Management System

A simple console-based campus club management system implemented in C++. It allows users to manage club information, add and remove members, search for members by student ID, and display club statistics.

## Features

- Set up basic club information (name and type)
- Add new members with student ID, name, and role
- Display all members in a formatted table
- Search for a member by student ID
- Remove a member by student ID
- Show total number of club members
- Clean and user-friendly menu-driven interface

## Project Structure

The program is organized into three main classes:

- **`Member`** – Represents a single club member, storing student ID, name, and role.
- **`Club`** – Represents a club, containing the club name, type, and a list of members.
- **`Admin`** – Provides management functions such as searching, deleting, and counting members.

The `main` function provides a text-based menu to interact with these classes.

## Requirements

- A C++ compiler supporting C++11 or later (e.g., g++, clang++, MSVC)
- Standard C++ libraries (no external dependencies)

## Compilation and Execution

### Using g++

bash
g++ -std=c++11 -o club_manager main.cpp
./club_manager

### Using clang++

bash
clang++ -std=c++11 -o club_manager main.cpp
./club_manager


### On Windows (MinGW)

bash
g++ -std=c++11 -o club_manager.exe main.cpp
club_manager.exe


> **Note:** Replace `main.cpp` with the actual filename of the source code.

## Usage

When you run the program, you will see a menu with the following options:


========= Campus Club Management System =========
1. Set up basic club information
2. Add a club member
3. View all members
4. Search for a member by student ID
5. Remove a club member
6. Count total members
0. Exit
=================================================
Please select an operation:


1. **Set up basic club information** – Enter the club name and type (e.g., "Chess Club", "Academic").
2. **Add a club member** – Enter the student ID, name, and role (e.g., "2024001", "Alice", "President").
3. **View all members** – Displays a formatted list of all members in the club.
4. **Search by student ID** – Finds and displays a member’s details by their student ID.
5. **Remove a club member** – Deletes a member from the club using their student ID.
6. **Count total members** – Shows the current number of members in the club.
0. **Exit** – Terminates the program.

Each operation (except exit) will pause before returning to the menu. Follow the on-screen prompts for input.

## Example


Please select an operation: 1
Enter club name: AI Club
Enter club type: Technology
Club information set successfully!

Please select an operation: 2
Enter student ID, name, role: 2025001 John President
Member added successfully!

Please select an operation: 3
===== [AI Club] - Technology =====
Student ID  Name        Role
2025001     John        President


## Author

This project was developed as a collaborative assignment for a C++ programming course.

## License

This project is provided for educational purposes. Feel free to use and modify it.
