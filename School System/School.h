#include <string>
#include "Student.h"
#include "Teacher.h"
#include "Class.h"
class School {
public:

    School(  Student* students, const Teacher* teachers ,const std::string& name = "" );

    School& addNewStudent(Student& student, School& school);

    School& addNewClass(Class& Class, School& school);

    School& addNewTeacher(Teacher& teacher, School& school);



private:

    std::string m_name;
    int m_schoolID;
    Teacher** teachers;
    int m_numOfTeachers;
    Class** classes;
    int m_numOfClasses;
    static int s_id;
     



};
