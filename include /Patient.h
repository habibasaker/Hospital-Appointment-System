#ifndef PATIENT_H
#define PATIENT_H

#include "User.h"
#include <vector>

class Patient : public User {
private:
    std::vector<int> appointmentIds;

public:
    Patient();
    Patient(int id, std::string name, std::string email);

    void addAppointment(int appointmentId);
    void displayInfo() const override;

    std::vector<int> getAppointments() const;
};

#endif
