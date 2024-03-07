#include <iostream>

using namespace std;

class Student
{
private:
    int roll;
    string name;
    int physGrade;
    int chemGrade;
    int mathGrade;

public:
    Student(int r, string n, int p, int c, int m);
    void setRoll(int r);
    void setName(string n);
    void setPhys(int p);
    void setChem(int c);
    void setMath(int m);
    int total();
    char grade();
};

int main()
{
    int roll;
    string name;
    int p,c,m;
    cout<<"Enter roll number of a student: "<<endl;
    cin>>roll;
    cout<<"Enter name of the student: "<<endl;
    cin>>name;
    cout<<"Enter grades of Physics, Chemistry and Math: "<<endl;
    cin>>p>>c>>m;
    Student s(roll, name, p, c, m);
    cout<<"The final grade of student "<<name<<" is "<<s.grade()<<endl;
    system("pause");
    return 0;
}

Student::Student(int r, string n, int p, int c, int m)
{
    roll = r;
    name = n;
    physGrade = p;
    chemGrade = c;
    mathGrade = m;
}
void Student::setRoll(int r)
{
    if(r>=0 && r<=100)
    {
        roll = r;
    }else return;
}
void Student::setName(string n)
{
    name = n;
}
void Student::setChem(int c)
{
    if(c>=0 && c<=100)
    {
        chemGrade = c;
    }else chemGrade = 0;
}
void Student::setMath(int m)
{
    if(m>=0 && m<=100)
    {
        mathGrade = m;
    }else mathGrade = 0;
}
void Student::setPhys(int p)
{
    if (p>=0 && p<=100)
    {
        physGrade = p;
    }else physGrade = 0;
}
int Student::total()
{
    return mathGrade+physGrade+chemGrade;
}
char Student::grade()
{
    float average = total()/3;
    if(average>=60)
    {
        return 'A';
    }else if(average>=40 && average<60)
    {
        return 'B';
    }else
    {
        return 'C';
    }
        
}
    