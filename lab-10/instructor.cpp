
class Instructor : public Employee
{
    char subjects[5][30];
    int subCount;

public:
    Instructor(int _id, char* _name, int _age, float _salary)
        : Employee(_id, _name, _age, _salary)
    {
        subCount = 0;
        cout << "\n Instructor ctor";
    }
    void addSubject(char* sub)
    {
        if(subCount < 5)
        {
            strcpy(subjects[subCount], sub);
            subCount++;
        }
        else
        {
            cout << "\n Cannot add more subjects!";
        }
    }
    void print()
    {
        Employee::print();
        cout << "\nSubjects: ";
        for(int i=0; i<subCount; i++)
            cout << subjects[i] << " ";
        cout << endl;
    }
};
