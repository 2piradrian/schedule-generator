#include <iostream>

#include "./models/subject.h"
#include "./services/uiservice.h"

int main() {

    UIService uiService;
    int option;
    
    do {
        uiService.showMainMenu();
        std::cin >> option;

        switch (option) {
            case 1:
                break;
            default:
                break;
        }
    }
    while (option != 0);
    

    return 0;
}