#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    
    Student()
    {
        marks = 0;
    }

      
    Student(int m)
    {
        marks = m;
    }

      
    Student(const Student &s)
    {
        marks = s.marks;
    }

    void setMarks(int m)
    {
        marks = m;
    }

    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    
    Student student1;

    
    Student student2(85);

    
    Student student3(student2);

    student1.setMarks(75);

    cout << "Student 1: ";
    student1.showMarks();

    cout << "Student 2: ";
    student2.showMarks();

    cout << "Student 3: ";
    student3.showMarks();

    return 0;
}