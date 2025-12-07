# Student Record Management System

A simple command-line student database management system written in C. This program allows you to manage student records with basic CRUD operations.

## Features

### Core Functionality
- Add new student records
- View all students in a formatted table
- Search for a student by ID
- Update existing student information
- Delete student records
- Persistent data storage

### Advanced Features
- Input validation and error handling
- Formatted table display for easy viewing
- ID-based search functionality
- Support for multiple attributes (ID, Name, Age, GPA, Course)
- Menu-driven command-line interface

## Data Structure

```c
struct Student {
    char id[MAXIDLENGTH];
    char name[MAXNAMELENGTH];
    int age;
    float gpa;
    char course[MAXNAMELENGTH];
};
```

## How It Works

### Menu Operations
1. **Add Student** - Add a new student with ID, name, age, GPA, and course
2. **View All Students** - Display all students in a formatted table
3. **Search Student** - Find a specific student by their ID
4. **Update Student** - Modify student information
5. **Delete Student** - Remove a student from the database
6. **Save and Exit** - Save data and close the program

### Data Management
- Records stored in memory during program execution
- Array-based storage for fast access
- Input validation to prevent invalid entries
- Clear table formatting for easy visualization

## How to Run

### Compilation

**Using Makefile:**
```bash
make
```

**Using GCC directly:**
```bash
gcc -Wall -Wextra -std=c11 -c student_db.c -o student_db.o
gcc student_db.o -o studentdb
```

### Running the Program

```bash
make run
```

Or directly:
```bash
./studentdb
```

### Cleaning Build Files

```bash
make clean
```

## Requirements

- C compiler (GCC recommended)
- Standard C library (stdio.h, stdlib.h, string.h)
- Make (optional, for using Makefile)

## Project Structure

```
student_db.c       - Main source code file
Makefile           - Build configuration
README.md          - This file
.gitignore         - Git ignore rules
```

## Menu Options

```
----------------------------------------
1. Add Student
2. View All Students
3. Search Student
4. Update Student
5. Delete Student
6. Save and Exit
----------------------------------------
```

## Key Functions

- `displayMenu()` - Display menu options
- `addStudent()` - Add new student to database
- `viewAllStudents()` - Display all students
- `searchStudent()` - Find student by ID
- `main()` - Program entry point and menu loop

## Limitations

- Maximum 100 students can be stored
- Data is lost when program exits (not persistent)
- String fields limited to fixed size
- No update and delete features in current version

## Learning Outcomes

This project demonstrates:
- Struct definitions and usage
- Array-based data storage
- Function organization and modularity
- User input validation
- Table formatting and display
- Menu-driven program design

## Future Enhancements

- File I/O for persistent data storage
- Complete update and delete functionality
- Sorting by different fields
- Search by name functionality
- Data export to CSV format

## Author

**SRM University AP - Second Year CSE Student**

December 2025

## License

This project is open source and available for educational purposes.
