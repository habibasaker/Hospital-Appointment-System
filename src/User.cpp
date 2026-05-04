#include "User.h"
#include <iostream>

User::User() : id(0), name(""), email("") {}

User::User(int id, std::string name, std::string email)
    : id(id), name(name), email(email) {}

void User::displayInfo() const {
    std::cout << "ID: " << id << "\nName: " << name << "\nEmail: " << email << std::endl;
}

int User::getId() const {
    return id;
}

std::string User::getName() const {
    return name;
}

std::string User::getEmail() const {
    return email;
}

User::~User() {}
