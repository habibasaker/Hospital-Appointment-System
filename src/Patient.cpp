#include "Patient.h"
#include <iostream>

Patient::Patient() : User() {}

Patient::Patient(int id, std::string name, std::string email)
    : User(id, name, email) {}

void Patient::addAppointment(int appointmentId) {
    appointmentIds.push_back(appointmentId);
}

void Patient::displayInfo() const {
    std::cout << "Patient Info:\n";
    User::displayInfo();

    std::cout << "Appointments: ";
    for (int id : appointmentIds) {
        std::cout << id << " ";
    }
    std::cout << std::endl;
}

std::vector<int> Patient::getAppointments() const {
    return appointmentIds;
}
