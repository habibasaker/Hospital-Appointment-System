
#include <gtest/gtest.h>
#include "Patient.h"

TEST(PatientTest, AddAppointment) {
    Patient p(1, "Sara", "sara@mail.com");

    p.addAppointment(100);
    p.addAppointment(200);

    std::vector<int> apps = p.getAppointments();

    ASSERT_EQ(apps.size(), 2);
    EXPECT_EQ(apps[0], 100);
    EXPECT_EQ(apps[1], 200);
}
