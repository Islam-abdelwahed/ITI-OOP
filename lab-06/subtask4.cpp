#include <cstring>
class employee
{
    int id;
    char name[20];
    int age;
    float salary;
public:
    void setId(int id)
    {
        this->id=id;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getId()
    {
        return id;
    }
    char* getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    float getSalary()
    {
        return salary;
    }

    void print()
    {
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Age: "<<age<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};


void print_emp(employee emp)
{
    cout<<"Employee Id: "<<emp.getId()<<endl;
    cout<<"Employee Name: "<<emp.getName()<<endl;
    cout<<"Employee Age: "<<emp.getAge()<<endl;
    cout<<"Employee Salary: "<<emp.getSalary()<<endl;
}


void task4()
{
    employee emp;
    int age,id;
    float salary;
    char name[20];
    cout<<"Enter employee Id: ";
    cin>>id;

    cout<<"Enter employee Name: ";
    cin.ignore();
    cin.getline(name,20);

    cout<<"Enter employee Age: ";
    cin>>age;

    cout<<"Enter employee Salary: ";
    cin>>salary;

    emp.setId(id);
    emp.setName(name);
    emp.setAge(age);
    emp.setSalary(salary);

    cout<<endl;
    emp.print();
    cout<<endl;
    print_emp(emp);
}
