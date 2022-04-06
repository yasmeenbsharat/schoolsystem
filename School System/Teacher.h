#include <string>
#include "Employee.h"

class Teacher : public Employee {
public:

    Teacher(const std::string& name = "",
        int age = 0,
        const std::string& email = "",
        double salary = 0.0,
        const std::string& phonenumber = "",
        const std::string& major = "");

    std::ostream& displyInformation(std::ostream& out);
private:
    std::string m_major;
    Class* m_c;
};
