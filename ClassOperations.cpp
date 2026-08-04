#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    
    Student()
    {
        rollNo = 0;
        cout << "Student Default Constructor Called" << endl;
    }

    
    Student(int r)
    {
        rollNo = r;
        cout << "Student Parameterized Constructor Called" << endl;
    }

    
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        cout << "Student Copy Constructor Called" << endl;
    }

     
    ~Student()
    {
        cout << "Student Destructor Called" << endl;
    }
};


class Sports
{
protected:
    int sportsMarks;

public:
    
    Sports()
    {
        sportsMarks = 0;
        cout << "Sports Default Constructor Called" << endl;
    }

    
    Sports(int m)
    {
        sportsMarks = m;
        cout << "Sports Parameterized Constructor Called" << endl;
    }

    
    Sports(const Sports &s)
    {
        sportsMarks = s.sportsMarks;
        cout << "Sports Copy Constructor Called" << endl;
    }

    
    ~Sports()
    {
        cout << "Sports Destructor Called" << endl;
    }
};

  
class Result : public Student, public Sports
{
private:
    int totalMarks;

public:
    
    Result() : Student(), Sports()
    {
        totalMarks = 0;
        cout << "Result Default Constructor Called" << endl;
    }

    
    Result(int r, int s, int t) : Student(r), Sports(s)
    {
        totalMarks = t;
        cout << "Result Parameterized Constructor Called" << endl;
    }

    
    Result(const Result &obj) : Student(obj), Sports(obj)
    {
        totalMarks = obj.totalMarks;
        cout << "Result Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "\nRoll No : " << rollNo;
        cout << "\nSports Marks : " << sportsMarks;
        cout << "\nTotal Marks : " << totalMarks << endl;
    }

    
    ~Result()
    {
        cout << "Result Destructor Called" << endl;
    }
};

int main()
{
    cout << "\n===== Default Constructor =====\n";
    Result r1;
    r1.display();

    cout << "\n===== Parameterized Constructor =====\n";
    Result r2(101, 25, 450);
    r2.display();

    cout << "\n===== Copy Constructor =====\n";
    Result r3(r2);
    r3.display();

    cout << "\nProgram Ends..." << endl;

    return 0;
}
