#include "Appointment.h"
#include <iostream>

Appointment::Appointment()
    : appointmentId(0), patientId(0), doctorId(0), date("") {}

Appointment::Appointment(int appId, int patientId, int doctorId, std::string date)
    : appointmentId(appId), patientId(patientId), doctorId(doctorId), date(date) {}

void Appointment::display() const {
    std::cout << "Appointment ID: " << appointmentId
              << "\nPatient ID: " << patientId
              << "\nDoctor ID: " << doctorId
              << "\nDate: " << date << std::endl;
}

int Appointment::getAppointmentId() const {
    return appointmentId;
}
