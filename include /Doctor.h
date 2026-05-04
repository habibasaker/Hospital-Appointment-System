#ifndef DOCTOR_H
#define DOCTOR_H

#include "User.h"
#include <string>

class Doctor : public User {
private:
    std::string specialty;

public:
    Doctor();
    Doctor(int id, std::string name, std::string email, std::string specialty);

    void displayInfo() const override;

    std::string getSpecialty() const;
};

#endif


