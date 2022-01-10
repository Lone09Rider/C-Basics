#include <iostream>

using namespace std;

class Student
{
    public:
        string name, major;
        double gpa;

        Student(string aname, string amajor, double agpa)
        {
            cout << "New Student : ==>>"<<endl;
            name = aname;
            major = amajor;
            gpa = agpa;
            cout << name << endl <<major<<endl<<gpa<<endl;
        }

        bool hasHonors ()  // 0 for False 1 for True as it is bool
        {
            if (gpa >= 3.5)
            {
                return true;
            }
            return false;
        }
};

int main()
{

    Student student1("Harry Potter", "Art", 2.4);
    cout << student1.hasHonors();

    Student student2("Lord of Rings", "Science", 4.0);
    cout << student2.hasHonors();

    return 0;
}
