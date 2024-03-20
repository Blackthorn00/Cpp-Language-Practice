#include <iostream>
using namespace std;

class Employee
{
private:
    int eID;
    string name;

public:
    Employee(int e, string n)
    {
        eID = e;
        name = n;
    }
    int getEmployeeID() { return eID; }
    string getEmployeeName() { return name; }
};

class FullTimeEmployee : public Employee
{
private:
    int salary;

public:
    FullTimeEmployee(int e, string n, int sal) : Employee(e, n)
    {
        salary = sal;
    }
    int getSalary() { return salary; }
};

class PartTimeEmployee : public Employee
{
private:
    int wage;

public:
    PartTimeEmployee(int e, string n, int w) : Employee(e, n)
    {
        wage = w;
    }
    int getWage() { return wage; }
};

int main()
{
    FullTimeEmployee emp1(112, "John Smith", 1200);
    PartTimeEmployee emp2(244, "Jessica Jones", 300);
    cout << "Salary of " << emp1.getEmployeeName << " is" << emp1.getSalary << endl;
    cout << "Daily wage of " << emp2.getEmployeeName << " is" << emp2.getWage << endl;
    return 0;
}