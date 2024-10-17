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

// Método para imprimir los detalles de la asignatura
void Subject::print() const {
    std::cout << std::setw(15) << std::left << commission 
              << std::setw(10) << std::left << day 
              << std::setw(12) << std::left << startTime 
              << std::setw(10) << std::left << endTime 
              << std::setw(10) << std::left << name << std::endl;
}

// Método para convertir un horario en formato HH:MM a un entero (segundos)
int Subject::convertTimeToInteger(std::string time) const {
    int hours = std::stoi(time.substr(0, 2));
    int minutes = std::stoi(time.substr(3, 2));

    return hours * 3600 + minutes * 60;
}