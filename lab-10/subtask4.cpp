
class Y
{
protected:
    int id;
};

class Z:public Y
{
protected:
    char* name;
};

class X:public Z
{
protected:
    int age;
};

class A: public X
{
protected:
    float salary;
public:
    void setId(int _id)
    {
        id=_id;
    };
    void setName(char* _name)
    {
        strcpy(name,_name);
    }
    void setAge(int _age)
    {
        age=_age;
    }
    void setSalary(float _salary)
    {
        salary=_salary;
    }
    void print()
    {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nSalary: " << salary << endl;
    }
};

void task4()
{
    A a1;
    a1.setId(1);
    a1.setName("islam");
    a1.setAge(10);
    a1.setSalary(1000);

    a1.print();
}
