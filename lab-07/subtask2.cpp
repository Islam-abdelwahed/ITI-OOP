
class Employee
{
    int id;
    char* name;
    int age;
    float salary;

public:
    Employee(int _id,char* _name)
    {
        id=_id;
        name=_name;
        cout<<"\n CTOR\n";
    }

    Employee(int _id,char* _name,int _age)
    {
        id=_id;
        name=_name;
        age= _age;
        cout<<"\n CTOR\n";
    }
    Employee(int _id,char* _name,int _age,float _salary)
    {
        id=_id;
        name=_name;
        age= _age;
        salary= _salary;
        cout<<"\n CTOR\n";
    }
    Employee()
    {
        cout<<"\n CTOR\n";
    }
    ~Employee()
    {
        cout<<"\n DTOR\n";
    }
    void setid(int _id)
    {
        id=_id;
    }
    void setname(char* _name)
    {
        name=_name;
    }
    void setage(int _age)
    {
        age=_age;
    }
    void setsalary(float _salary)
    {
        salary=_salary;
    }

    int getid()
    {
        return id;
    }
    char* getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    float getsalary()
    {
        return salary;
    }

    void print()
    {
        cout<<"===Employee===\nID: "<<id<<"\nName: "<<name<<"\nAge: "<<age<<"\nSalary: "<<salary<<endl;
    }
};

void myFun(Employee emp)
{
    emp.print();
}
void myFun(Employee* emp)
{
    emp->print();
}
int myFuns(Employee& emp)
{
    emp.print();
}


void task2()
{

    // emp.setid(10);
    //     emp.setname("Islam Elsayed");
    //     emp.setage(22);
    //     emp.setid(1000.5);

        int id,age;
        float salary;
        char name[20];
    cout<<"Enter employee id: ";
    cin>> id;
    cout<<"Enter employee name: ";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Enter employee age: ";
    cin>> age;
    cout<<"Enter employee salary: ";
    cin>> salary;

    Employee emp(id,name,age,salary);

    myFun(emp);
    myFun(&emp);
    myFuns(emp);
}
