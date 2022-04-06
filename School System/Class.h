#include <string>
#include "Student.h"
#include "Teacher.h"
class Class {
public:
    Class(const Student* students, const Teacher supervisor, const std::string& level = "");
    
    friend std::ostream& operator<< (std::ostream& out,
        const Class& c);
    std::string& getLevel();

private:
    Student* students;
    int m_classID;
    int m_numOfStudents;
    Teacher m_csupervisor;
    std::string m_level;
    static int s_cid;
};
