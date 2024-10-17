#include "subject.h"

// Constructor
Subject::Subject(std::string commission, std::string name, int day, std::string startSchedule, std::string endSchedule) {
    this->commission = commission;
    this->name = name;
    this->day = day;
    this->startSchedule = startSchedule;
    this->endSchedule = endSchedule;
    this->startTime = convertTimeToInteger(startSchedule);
    this->endTime = convertTimeToInteger(endSchedule);
}

// Imprimir los detalles de la asignatura
void Subject::print() const {
    std::cout << std::setw(10) << std::left << commission 
              << std::setw(25) << std::left << name 
              << std::setw(10) << std::left << convertDayToString(day) 
              << std::setw(10) << std::left << startSchedule 
              << std::setw(10) << std::left << endSchedule 
              << std::endl;
}

// Convertir un horario en formato HH:MM a un entero (segundos)
int Subject::convertTimeToInteger(std::string time) const {
    int hours = std::stoi(time.substr(0, 2));
    int minutes = std::stoi(time.substr(3, 2));

    return hours * 3600 + minutes * 60;
}

// Convertir día de la semana a string
std::string Subject::convertDayToString(int day) const {
    switch (day) {
        case 1:
            return "Lunes";
        case 2:
            return "Martes";
        case 3:
            return "Miércoles";
        case 4:
            return "Jueves";
        case 5:
            return "Viernes";
        case 6:
            return "Sábado";
        case 7:
            return "Domingo";
        default:
            return "Día inválido";
    }
}