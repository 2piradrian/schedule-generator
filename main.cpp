#include <iostream>
#include <locale>
#include <codecvt>

#include "./models/subject.h"

int main() {
    // Create a Subject object
    Subject subject1("COM-06", "Programacion I", 1, "08:00", "10:00");
    Subject subject2("COM-07", "Programacion II", 2, "10:00", "12:00");

    // Print the details of the subject
    subject1.print();
    subject2.print();

    std::cin.get();

    return 0;
}