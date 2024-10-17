#include <iostream>

#include "./models/subject.h"

void showMenu() {
    std::wcout << L"Lista de Opciones" << std::endl;
    std::wcout << L"1. Cargar listado de horarios" << std::endl;
    std::wcout << L"2. Inscribirse a materias" << std::endl;
    std::wcout << L"3. Desinscribirse de materias" << std::endl;
    std::wcout << L"4. Mostrar combinaciones de horarios" << std::endl;
    std::wcout << L"0. Salir" << std::endl;
}

int main() {

    int option;
    
    do {
        showMenu();

        std::cin >> option;

        switch (option) {
            case 1:
                break;
            case 0:
                break;
            default:
                std::wcout << L"Opcion invalida. Intente de nuevo." << std::endl;
                break;
        }
    }
    while (option != 0);
    

    return 0;
}