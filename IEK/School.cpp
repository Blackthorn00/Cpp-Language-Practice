#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*class student
vector students
addstudent
deletestudent
*/

class Student{
private:
    string firstName;
    string lastName;
    int grade;
public:
    Student(const string& f,const string& l,const int& g) :
    firstName(f), lastName(l), grade(g) {}
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    int getGrade()
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
    // management.displayStudents();
    return 0;
}
