#include <gtest/gtest.h>
#include "User.h"

TEST(UserTest, ConstructorAndGetters) {
    User u(1, "Ali", "ali@mail.com");

    EXPECT_EQ(u.getId(), 1);
    EXPECT_EQ(u.getName(), "Ali");
    EXPECT_EQ(u.getEmail(), "ali@mail.com");
}
