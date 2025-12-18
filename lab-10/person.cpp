class Person {
protected:
    int id;
    char name[20];
    int age;

public:
    Person() {}

    Person(int _id, const char* _name)
    {
        id = _id;
        strcpy(name, _name);
        age = 6;
    }

    Person(int _id, const char* _name, int _age)
    {
        id = _id;
        strcpy(name, _name);
        age = _age;
    }

    void setId(int _id)
    {
        id = _id;
    }

    void setName(const char* _name)
    {
        strcpy(name, _name);
    }

    void setAge(int _age)
    {
        if (_age > 0) age = _age;
        else cout << "\nInvalid age for person";
    }

    int getId() { return id; }
    char* getName() { return name; }
    int getAge() { return age; }

    void print()
    {
        cout << "\nID: " << id << " | Name: " << name << " | Age: " << age;
    }
};
