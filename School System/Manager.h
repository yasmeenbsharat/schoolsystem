#include <string>
#include "Employee.h"


class Manager :public Employee {
public:

    Manager(const std::string& name = "",
        int age = 0,
        const std::string& email = "",
        double salary = 0.0,
        const std::string& phonenumber = "",
        double bonus=0.0);
    std::ostream& displyInformation(std::ostream& out);

private:
  
	double m_bonus;

};
