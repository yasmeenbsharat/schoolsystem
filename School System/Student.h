#include <string>

#include "Person.h"

class Student : public Person {
public: 
    Student(const std::string& name = "",
    int age = 0,
    const std::string& email = "",
    const std::string& schoollevel = "");

     std::ostream& displyInformation(std::ostream& out);

     std::string& getSchoolLevel();
private:

    std::string m_schoollevel;

};