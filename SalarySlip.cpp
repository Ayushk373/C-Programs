#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Staff
{
private:
    int staff_id;
    string name;
    float basic_salary;
    float DA, HRA, ITax, Net_Salary;

public:

    void accept()
    {
        cout<<"\n Enter Staff ID: ";
        cin>>staff_id;

        cout<<"\n Enter Staff Name: ";
        cin>>name;

        cout<<"\n Enter Staff Salary:";
        cin>>basic_salary;

    }

    void calculate()
    {
        DA = basic_salary * 0.25;
        HRA = 800;
        ITax = basic_salary * 0.15;
        Net_Salary= basic_salary + DA + HRA - ITax;
    }
    
    void display()
    {
        cout<<"\n-----------------------------------------";
        cout<<"\nStaff ID     :"<<staff_id;
        cout<<"\nStaff Name   :"<<name;
        cout<<"\nBasic Salary :"<<basic_salary;
        cout<<"\nDA (25%)     :"<<DA;
        cout<<"\nHRA          :"<<HRA;  
        cout<<"\nIncome Tax   :"<<ITax;
        cout<<"\nNet Salary   :"<<Net_Salary;
        cout<<"\n-------------------------------------------";
    }


    string getName()
    {
        return name;
    }
};

int main()
{
    int n;

    cout<<"Enter Number Of Staff Members:";
    cin>>n;

    Staff* s = new Staff[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter Details of Staff"<< i + 1 << endl;
        s[i].accept();
        s[i].calculate();
    }

    //Sort by name
    for (int i = 0; i <= n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (s[i].getName() > s[j].getName())
            {
                swap(s[i], s[j]);
            }
        }
    }

    cout<<"\n\n=============== STAFF PAYMENT SLIP ===============\n";

    for(int i=0; i < n; i++)
    {
        s[i].display();
    }

    delete[] s;


    return 0;
}
