#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
private:
    string firstName;
    string lastName;
    int grade;
public:
    Student(const string& f, const string& l, const int& g) :
    firstName(f), lastName(l), grade(g) {}
    string getFirstName() const
    {
        return firstName;
    }
    string getLastName() const
    {
        return lastName;
    }
    int getGrade() const
    {
        return grade;
    }
};

class Management{
private:
    vector<Student> students;
public:
    void displayStudents()
    {
        for(const auto& student: students)
        {
            cout << "First Name: " << student.getFirstName() << endl;
            cout << "Last Name: " << student.getLastName() << endl;
            cout << "Grade: " << student.getGrade() << endl;
        }
    }
    void addStudent(const Student& s)
    {
        students.push_back(s);
    }
};

int main()
{
    Management management;
    Student student("Vagelis", "Mileounis", 9); 
    management.addStudent(student);
    management.displayStudents();
    return 0;
}
