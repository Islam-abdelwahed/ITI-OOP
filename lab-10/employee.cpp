class Employee : public Person
{
    float salary;

public:
    Employee(int _id, const char* _name) : Person(_id, _name, 30)
    {
        salary = 6000;
        cout << "\n Employee CTOR";
    }

    Employee(int _id, const char* _name, int _age) : Person(_id, _name, _age)
    {
        salary = 6000;
        cout << "\n Employee CTOR";
    }

    Employee(int _id, const char* _name, int _age, float _salary) : Person(_id, _name, _age)
    {
        salary = _salary;
        cout << "\n Employee CTOR";
    }

    void setSalary(float _salary)
    {
        salary = _salary;
    }

    float getSalary()
    {
        return salary;
    }

    void setAge(int _age)
    {
        if (_age >= 30)
            age = _age;
        else
            cout << "\n Invalid age for Employee";
    }

    void print()
    {
        Person::print();
        cout << " Salary: " << salary;
    }
};
