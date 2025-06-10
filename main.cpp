#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <cstdlib>
#include <thread>
#include "commands.h"
using namespace std;


void SetConsoleColors(int textColor, int backgroundColor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

void instalator()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::time_t t = std::time(nullptr);
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = TRUE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
    cout << "Starting OneDOS...\n";
    cout << "   \n";
    cout << " ";
    this_thread::sleep_for(chrono::seconds(1));
    system("cls");
    cout << "Starting OneDOS...\n";
    cout << "   \n";
    cout << " ";
    this_thread::sleep_for(chrono::seconds(1));
    system("cls");
    cout << "Starting OneDOS...\n";
    cout << "   \n";
    cout << " ";
    this_thread::sleep_for(chrono::seconds(1));
    SetConsoleColors(15, 1);
    system("cls");
    char countryCode[3];
    GetLocaleInfo(LOCALE_USER_DEFAULT, LOCALE_SISO3166CTRYNAME, countryCode, sizeof(countryCode));

    while (true)
    {
        system("cls");
        cout << "                \n";
        cout << "  OneDOS 1.0 Setup\n";
        cout << "  ================\n";
        cout << "        Welcome to setup.\n" << endl;
        cout << "        The Setup program prepares OneDOS 1.0 to run on your\n       computer." << endl;
        cout << "                                                                             \n";
        cout << "            . To set up ONEDOS now, press ENTER.\n";
        cout << "                                                                             \n";
        cout << "            . To learn more about Setup before continuing, press F1.\n";
        cout << "                                                                             \n";
        cout << "            . To exit Setup without installing ONEDOS, press F3.\n";
        cout << "                                                                             \n";
        cout << "        Note: If you have not backed up your files recently, you\n";
        cout << "              might want to do so before installing ONEDOS. To back\n";
        cout << "              up your files, press F3 to quit Setup now. Then, back\n";
        cout << "              up your files by using a back up program.\n";
        cout << "                                                                             \n";
        cout << "        To continue Setup, press Enter\n";
        cout << "                                                                             \n";
        cout << " _____________________________________________________________________________\n";
        cout << "        ENTER=Continue      F1=Help     F3=Exit     F5=Remove Color           \n";

        int key = _getch();

        if (key == 13) // enter
        {
            system("cls");
            cout << "                \n";
            cout << "  OneDOS 1.0 Setup\n";
            cout << "  ================\n";
            cout << "        Setup needs to configure the unallocated space on your\n        hard disk for use with OneDOS. None of your existing\n        files will be affected.\n" << endl;
            cout << "                                                                             \n";
            cout << "        To have setup configure the space for you, choose the recommended option\n";
            cout << "        \n";
            cout << "           1. Configure unallocated disk space (recommended)\n";
            cout << "           2. Exit Setup\n";
            cout << "                                                                             \n";
            cout << "                                                                             \n";
            cout << " _____________________________________________________________________________\n";
            cout << "                           SELECT 1. OR 2.           \n";
            int setup1 = _getch();
            cout << setup1;
            this_thread::sleep_for(chrono::milliseconds(950));
            if (setup1 == '1')
            {
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Setup will restart your  # \n";
                cout << "                           #   computer in 3 seconds    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::seconds(3));
                SetConsoleColors(15, 0);
                system("cls");
                cout << "Starting OneDOS...\n";
                cout << "   \n";
                cout << " ";
                this_thread::sleep_for(chrono::seconds(1));
                system("cls");
                cout << "Starting OneDOS...\n";
                cout << "   \n";
                cout << " ";
                this_thread::sleep_for(chrono::seconds(1));
                system("cls");
                cout << "Starting OneDOS...\n";
                cout << "   \n";
                cout << " ";
                SetConsoleColors(15, 1);
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   1% of drive formated     #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(150));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   5% of drive formated     #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   10% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   15% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   20% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   25% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   30% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   35% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   40% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(5000));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   90% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   95% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Forrmating drive C       # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   100% of drive formated    #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(15));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Formatting Hard Disk Drives\n" << endl;
                cout << "                                                                             \n";
                cout << "        You have configured some or all of your disk space for use\n        with OneDOS. This space is being formatted now.\n";
                cout << "        \n";
                cout << "                           ##############################\n";
                cout << "                           #   Please wait.             # \n";
                cout << "                           #                            #                                    \n";
                cout << "                           #   Setup is analyzing  your #                                    \n";
                cout << "                           #   hard disk.               #                                    \n";
                cout << "                           ##############################\n                                  \n";
                cout << "                                                                             \n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(500));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Setup will use the following system settings:\n" << endl;
                cout << "                                                                             \n";
                cout << "            Date/Time:             " << std::ctime(&t) << "\n";
                cout << "            Country:               " << countryCode << "\n";
                cout << "                                                                             \n";
                cout << "            Keyboard layout:       " << countryCode << "\n";
                cout << "                                                                             \n";
                cout << "            To change a setting, restart the system\n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(1000));
                system("cls");
                cout << "                \n";
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Setup will place your OneDOS files in the following\n        directory:  C:/OneDOS\n";
                this_thread::sleep_for(chrono::milliseconds(2000));
                system("cls");
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Installing...\n" << endl;
                cout << "                                                                             \n";
                cout << "            #################################################################\n";
                cout << "            #@@@@@                                                          #\n";
                cout << "            #@@@@@                                                          # \n";
                cout << "            #@@@@@                                                          #\n";
                cout << "            #################################################################\n";
                cout << "                                   Completed: 10%\n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(3000));
                system("cls");
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Installing...\n" << endl;
                cout << "                                                                             \n";
                cout << "            #################################################################\n";
                cout << "            #@@@@@@@@@@@@@@@                                                #\n";
                cout << "            #@@@@@@@@@@@@@@@                                                #\n";
                cout << "            #@@@@@@@@@@@@@@@                                                #\n";
                cout << "            #################################################################\n";
                cout << "                                   Completed: 30%\n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(3000));
                system("cls");
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Installing...\n" << endl;
                cout << "                                                                             \n";
                cout << "            #################################################################\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                #\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                #\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                #\n";
                cout << "            #################################################################\n";
                cout << "                                   Completed: 58%\n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(3000));
                system("cls");
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Installing...\n" << endl;
                cout << "                                                                             \n";
                cout << "            #################################################################\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                #\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                #\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                #\n";
                cout << "            #################################################################\n";
                cout << "                                   Completed: 86%\n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(3000));
                system("cls");
                cout << "  OneDOS 1.0 Setup\n";
                cout << "  ================\n";
                cout << "        Installing...\n" << endl;
                cout << "                                                                             \n";
                cout << "            #################################################################\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
                cout << "            #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
                cout << "            #################################################################\n";
                cout << "                                   Completed: 100%\n";
                cout << " _____________________________________________________________________________\n";
                this_thread::sleep_for(chrono::milliseconds(3000));
                break;
            }
            else if (setup1 == '2')
            {
                cout << "Exiting...\n";
                break;
            }
            else
            {
                cout << "Invalid option, exiting...\n";
                break;
            }
        }
        else if (key == 59) // F1
        {
            system("cls");
            cout << "Help: This setup will install OneDOS 1.0 on your computer. OneDOS is a user friendly operating system. With a OneDOS you can install for example ConsoleOS.\nYou can use OneDOS for personal use. Want desktop? Install ConsoleOS! OneDOS is a MS-DOS based DOS.\nMS-DOS is a trademark of Microsoft incorporation." << endl;
            cout << "Press any key to return to the main menu...";
            _getch();
        }
        else if (key == 61) // F3
        {
            cout << "Quited..." << endl;
            exit(0);
        }
        else if (key == 63) // F5
        {
            SetConsoleColors(15, 0);
        }
        else
        {
            Beep(1750, 100);
        }
    }
}

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
            cout << "'" << cmd << "' is incorrect command. Type 'help' to view avalibe commands\n";
        }

    }
    return 0;
}
