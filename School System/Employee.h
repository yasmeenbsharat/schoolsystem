#include <string>

#include "Person.h"

class Employee : public Person {
public:
    Employee(const std::string& name = "",
        int age = 0,
        const std::string& email = "",
        double salary = 0.0,
        const std::string& phonenumber = "");

    void updateSalary(std::string& salary);

    void updatePhoneNumber(std::string& phonenumber);

    virtual std::ostream& displyInformation(std::ostream& out);
private: 
    double m_salary;
    std::string m_phonenumber;

};