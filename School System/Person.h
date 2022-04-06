#include <string>

class Person {
public:

    Person(const std::string& name = "",
        int age = 0,
        const std::string& email = "");

    virtual std::ostream& displyInformation(std::ostream& out);

    friend std::ostream& operator<< (std::ostream& out,
        const Person& p);

    void updateName(std::string& name);

    void updateEmail(std::string& email);

    void updateAge(std::string& Age);

    int getPersonID();

private:
  
    std::string m_email;
    std::string m_name;
    int m_age;
    int m_personID;
    static int s_id;
};