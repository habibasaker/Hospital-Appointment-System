#include <iostream>
#include "User.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

int main() {
    Patient p1(1, "Ahmed Ali", "ahmed@mail.com");
    Doctor d1(101, "Dr. Sara", "sara@mail.com", "Cardiology");

    Appointment a1(1001, p1.getId(), d1.getId(), "2026-05-10");

    p1.addAppointment(a1.getAppointmentId());

    std::cout << "=== System Demo ===\n\n";

    p1.displayInfo();
    std::cout << "\n";
    d1.displayInfo();
    std::cout << "\n";
    a1.display();

    return 0;
}
