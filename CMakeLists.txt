enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests
    tests/test_user.cpp
    tests/test_patient.cpp
    tests/test_doctor.cpp
    tests/test_appointment.cpp
    src/User.cpp
    src/Patient.cpp
    src/Doctor.cpp
    src/Appointment.cpp
)

target_link_libraries(runTests GTest::GTest GTest::Main pthread)

add_test(NAME AllTests COMMAND runTests)
