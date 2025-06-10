#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include <map>
#ifndef COMMANDS_H
#define COMMANDS_H

using namespace std;
std::string valuemkdir;
std::string symulowanaSciezka = "C:\\ONEDOS";
std::map<std::string, std::vector<std::string>> systemPlikow;
std::string pobierzBiezacyKatalog() {
    char buffer[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, buffer);
    return std::string(buffer);
}

void inicjalizujSystemPlikow() {
    systemPlikow[symulowanaSciezka] = {};
}

void clearscreen() {
    system("cls");
}

void dir() {
    WIN32_FIND_DATA findFileData;
    HANDLE hFind = FindFirstFile("*", &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        std::cout << "[ERROR] Cannot read folder\n";
        return;
    }

    std::cout << "Directory contents:\n";
    do {
        const char* fileName = findFileData.cFileName;
        if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            std::cout << "[DIRECTORY] " << fileName << '\n';
        } else {
            std::cout << "      " << fileName << '\n';
        }
    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
}

void mkdir() {
    std::string nazwaFolderu;
    std::cout << "Type the name you want to create: ";
    std::getline(std::cin, nazwaFolderu);

    if (nazwaFolderu.empty()) {
        std::cout << "[ERROR] Folder name cannot be empty!\n";
        return;
    }


    std::string sciezkaFolderu = symulowanaSciezka + "\\" + nazwaFolderu;


    std::cout << "Full path to create: " << sciezkaFolderu << std::endl;


    DWORD atrybuty = GetFileAttributes(symulowanaSciezka.c_str());
    if (atrybuty == INVALID_FILE_ATTRIBUTES || !(atrybuty & FILE_ATTRIBUTE_DIRECTORY)) {
        std::cout << "[ERROR] Parent directory does not exist: " << symulowanaSciezka << std::endl;
        return;
    }


    atrybuty = GetFileAttributes(sciezkaFolderu.c_str());
    if (atrybuty != INVALID_FILE_ATTRIBUTES) {
        std::cout << "[ERROR] Folder \"" << nazwaFolderu << "\" already exists!\n";
        return;
    }


    if (CreateDirectory(sciezkaFolderu.c_str(), NULL)) {
        std::cout << "[OK] Directory \"" << nazwaFolderu << "\" created successfully!\n";
    } else {
        DWORD error = GetLastError();
        std::cout << "[ERROR] Unable to create directory \"" << nazwaFolderu << "\". Error code: " << error << "\n";

        switch (error) {
            case ERROR_PATH_NOT_FOUND:
                std::cout << "[ERROR] The path was not found. Please check if the full path exists.\n";
                break;
            case ERROR_ACCESS_DENIED:
                std::cout << "[ERROR] Access denied. You may not have the necessary permissions.\n";
                break;
            case ERROR_ALREADY_EXISTS:
                std::cout << "[ERROR] Folder already exists.\n";
                break;
            default:
                std::cout << "[ERROR] Unknown error occurred. Please check the system logs.\n";
                break;
        }
    }
}





void zmienKatalog() {
    std::string nowyKatalog;
    std::cout << "[?] Type the name of the folder you want to go to: ";
    std::getline(std::cin, nowyKatalog);

    if (nowyKatalog == "..") {
        size_t ostatniBackslash = symulowanaSciezka.find_last_of("\\");
        if (ostatniBackslash != std::string::npos && symulowanaSciezka != "A:\\OneDOS") {
            symulowanaSciezka = symulowanaSciezka.substr(0, ostatniBackslash);
            std::cout << "[OK] \"" << symulowanaSciezka << "\".\n";
        } else {
            std::cout << "[ERROR] Already in main directory.\n";
        }
    } else {
        std::string sciezkaDocelowa = symulowanaSciezka + "\\" + nowyKatalog;

        DWORD atrybuty = GetFileAttributes(sciezkaDocelowa.c_str());
        if (atrybuty != INVALID_FILE_ATTRIBUTES && (atrybuty & FILE_ATTRIBUTE_DIRECTORY)) {
            symulowanaSciezka = sciezkaDocelowa;
            std::cout << "[OK]\"" << symulowanaSciezka << "\".\n";
        } else {
            std::cout << "[ERROR] Directory \"" << nowyKatalog << "\" doesn't exist!\n";
        }
    }
}


#endif
