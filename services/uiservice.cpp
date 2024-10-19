#include <iostream>
#include "uiservice.h"

// Mostrar el menú principal
void UIService::showMainMenu() const {
    clearScreen();
    std::wcout << L"+--------------------------------------+" << std::endl;
    std::wcout << L"|            Menu Principal            |" << std::endl;
    std::wcout << L"+--------------------------------------+" << std::endl;
    std::wcout << L"| 1. Cargar listado de horarios        |" << std::endl;
    std::wcout << L"| 2. Inscribirse a materias            |" << std::endl;
    std::wcout << L"| 3. Desinscribirse de materias        |" << std::endl;
    std::wcout << L"| 4. Mostrar combinaciones de horarios |" << std::endl;
    std::wcout << L"| 0. Salir                             |" << std::endl;
    std::wcout << L"+--------------------------------------+" << std::endl;
    std::wcout << L"\nSeleccione una opcion: " << std::endl;
}

// Mostrar mensaje de solicitud de ingreso de datos
std::string UIService::showInputRequest(const char* message) const {
    std::string input;
    std::wcout << message << std::endl;
    std::cin >> input;

    return input;
}

// Limpiar la pantalla
void UIService::clearScreen() const {
    std::cout << "\033[2J\033[1;1H";
}

