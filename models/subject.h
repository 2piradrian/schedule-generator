#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <iomanip>

class Subject {
public:
    std::string commission;             // Comisión (id que identifica a la materia)
    std::string name;                   // Nombre de la materia
    int day;                            // Día (1 = Lunes, 2 = Martes, etc.)
    std::string startSchedule;          // Horario de Inicio (viene en formato HH:MM)
    std::string endSchedule;            // Horario de Fin (viene en formato HH:MM)
    int startTime;                      // Se calcula a partir de startSchedule
    int endTime;                        // Se calcula a partir de endSchedule

    // Constructor
    Subject(std::string commission, std::string name, int day, std::string startSchedule, std::string endSchedule);

    // Imprimir los detalles de la asignatura
    void print() const;

private:
    // Convertir un horario en formato HH:MM a un entero
    int convertTimeToInteger(std::string time) const;
    // Convertir día de la semana a string
    std::string convertDayToString(int day) const;
};

#endif // SUBJECT_H
