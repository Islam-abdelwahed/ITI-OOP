
void task3()
{
    // Test Person
    Person p1(1, "Ali", 20);
    p1.print();

    // Test Student
    Student s1(2, "Sara", 10);
    s1.setGrade(5);
    s1.print();

    // Test Employee
    Employee e1(3, "Mohamed", 35, 8000);
    e1.print();

    // Test Instructor
    Instructor i1(4, "Dr. Ahmed", 45, 15000);
    i1.addSubject("Math");
    i1.addSubject("AI");
    i1.print();
}
