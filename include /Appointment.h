#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

class Appointment {
private:
    int appointmentId;
    int patientId;
    int doctorId;
    std::string date;

public:
    Appointment();
    Appointment(int appId, int patientId, int doctorId, std::string date);

    void display() const;

    int getAppointmentId() const;
};

#endif
