cmake_minimum_required(VERSION 3.10)
project(HospitalAppointmentSystem)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Source files
set(SOURCES
    src/User.cpp
    src/Patient.cpp
    src/Doctor.cpp
    src/Appointment.cpp
)

# Main executable
add_executable(HospitalApp src/main.cpp ${SOURCES})

# ---------------------------
# GoogleTest (FIXED VERSION)
# ---------------------------
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)

# Prevent overriding compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

# Test executable
add_executable(runTests
    tests/test_user.cpp
    tests/test_patient.cpp
    tests/test_doctor.cpp
    tests/test_appointment.cpp
    ${SOURCES}
)

target_link_libraries(runTests gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
