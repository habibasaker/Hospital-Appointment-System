#include <gtest/gtest.h>
#include "Appointment.h"

TEST(AppointmentTest, ConstructorAndGetId) {
    Appointment a(500, 1, 10, "2026-05-10");

    EXPECT_EQ(a.getAppointmentId(), 500);
}
