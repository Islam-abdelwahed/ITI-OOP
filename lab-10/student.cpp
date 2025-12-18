class Student : public Person
{
    int grade;

public:
    Student(int _id, const char* _name) : Person(_id, _name, 6)
    {
        grade = 1;
    }

    Student(int _id, const char* _name, int _age) : Person(_id, _name, _age)
    {
        grade = 1;
    }

    void setGrade(int _grade)
    {
        grade = _grade;
    }
    void setAge(int _age)
    {
        if (_age >= 6)
            age = _age;
        else
            cout << "\n Invalid age for Student";
    }
    int getGrade()
    {
        return grade;
    }

    void print()
    {
        Person::print();
        cout << " | Grade: " << grade;
    }
};
