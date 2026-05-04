#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    int id;
    std::string name;
    std::string email;

public:
    User();
    User(int id, std::string name, std::string email);

    virtual void displayInfo() const;

    int getId() const;
    std::string getName() const;
    std::string getEmail() const;

    virtual ~User();
};

#endif
