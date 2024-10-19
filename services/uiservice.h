#ifndef UISERVICE_H
#define UISERVICE_H

class UIService {
public:
    // Muestra el menú principal
    void showMainMenu() const;
    // Envia un solicitud de ingreso de datos
    std::string showInputRequest(const char* message) const;


private:
    // Limpia la pantalla
    void clearScreen() const;
};

#endif
