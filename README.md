# OneDOS Setup

This is a C++ program that simulates the installation process of an operating system called OneDOS. The program uses various libraries to create a console-based setup interface.

## Features

- Simulates the installation process of OneDOS.
- Displays various setup screens and progress bars.
- Allows user interaction through keyboard inputs.
- Simulates file system operations and command execution.

## Dependencies

The program uses the following libraries:

- `<iostream>`: For input and output operations.
- `<string>`: For string manipulation.
- `<windows.h>`: For Windows-specific functions.
- `<conio.h>`: For console input and output operations.
- `<chrono>`: For time-related operations.
- `<cstdlib>`: For general utilities.
- `<thread>`: For threading support.
- `"commands.h"`: A custom header file for additional commands and functions.

## Functions

### `SetConsoleColors(int textColor, int backgroundColor)`

Sets the console text and background colors.

- `textColor`: The color of the text.
- `backgroundColor`: The color of the background.

### `instalator()`

Simulates the installation process of OneDOS. It displays various setup screens, progress bars, and handles user inputs.

### `main()`

The main function that initializes the file system, starts the installer, and handles command inputs from the user.

## Usage

1. Compile the program using a C++ compiler.
2. Run the executable.
3. Follow the on-screen instructions to simulate the installation process.

## Commands

The program supports the following commands:

- `cls`: Clears the screen.
- `shutdown`: Shuts down the system.
- `echo`: Displays a message.
- `mkdir`: Creates a directory.
- `cd`: Changes the current directory.
- `dir`: Lists the contents of the current directory.

## Example

```cpp
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <cstdlib>
#include <thread>
#include "commands.h"

using namespace std;

int main()
{
    string cmd;
    inicjalizujSystemPlikow();
    instalator();
    SetConsoleColors(15, 0);
    system("cls");
    cout << "   \n";
    cout << symulowanaSciezka << "> start /s /r /m DRVSETUP.EXE" << endl;
    cout << "   \n";
    cout << "Driver setup for OneDOS, ConsoleOS, OneOS. Made by (c) OneDevelopment\n";
    cout << "Installing...\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Status     Driver\n" ;
    cout << "[OK] MOUSE PS/2 DRIVER\n";
    cout << "[OK] USB 3.0/3.1 DRIVER\n";
    cout << "[OK] KEYBOARD PS/2 DRIVER\n";
    cout << "[OK] USB 2.0/1.0 DRIVER\n";
    cout << "[OK] DP/HDMI DRIVER\n";
    cout << "[OK] INTEGRATED SCREEN DRIVER\n";
    cout << "[OK] SOUND CARD DRIVER\n";
    cout << "[ERROR] VGA DRIVER\n";
    cout << "         \n";
    cout << "[ERROR] VGA DRIVER NOT INSTALLED! VGA WILL NOT WORK OR WORK BAD.\n";
    cout << "----------------------------------------------------------------\n";
    while ( true )
    {
        cout << symulowanaSciezka << ">";
        getline(cin, cmd);
        if (cmd == "cls")
        {
            clearscreen();
        }
        else if (cmd == "shutdown")
        {
            cout << "Shutting down...\n";
            break;
        }
        else if (cmd == "echo")
        {
            cout << "Correct usage: echo <argument>.\n";
        }
        else if (cmd.rfind("echo ", 0) == 0)
        {
            std::string message = cmd.substr(5);
            std::cout << message << "\n";
        }
        else if (cmd.rfind("mkdir", 0) == 0)
        {
            mkdir();
        }
        else if (cmd.rfind("cd ..", 0) == 0)
        {
             zmienKatalog();
        }
        else if (cmd.rfind("cd", 0) == 0)
        {
            zmienKatalog();
        }
        else if (cmd == "dir")
        {
            dir();
        }
        else
        {
            cout << "'" << cmd << "' is incorrect command. Type 'help' to view available commands\n";
        }
    }
    return 0;
}
