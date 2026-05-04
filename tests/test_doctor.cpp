#include <gtest/gtest.h>
#include "Doctor.h"

TEST(DoctorTest, ConstructorAndSpecialty) {
    Doctor d(10, "Dr. Omar", "omar@mail.com", "Cardiology");

    EXPECT_EQ(d.getId(), 10);
    EXPECT_EQ(d.getName(), "Dr. Omar");
    EXPECT_EQ(d.getSpecialty(), "Cardiology");
}
