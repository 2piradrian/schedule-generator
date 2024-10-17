#include "./models/subject.h"

int main() {
    // Create a Subject object
    Subject subject1("COM-06", "Programación I", 1, "08:00", "10:00");
    Subject subject2("COM-07", "Programación II", 2, "10:00", "12:00");

    // Print the details of the subject
    subject1.print();
    subject2.print();

    return 0;
}