#include<iostream>
using namespace std;

class Publication
{
protected:
  string title;
    float price;

public:
    void getPublication()
    {

        cout << "Enter the title: ";
        cin >> title;

        cout << "Enter the price: ";
        cin >> price;

        if(price < 0)
                throw(price);
        
    }

    void displayPublication()
    {

        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    void resetPublication()
    {
        title = "";
        price = 0.0;
    }
};

class Book : public Publication
{
private:
    int pageCount;

public:
    void getData()
    {
        try
            {
                getPublication();

                cout << "Enter page count: ";
                cin >> pageCount;

                if(pageCount < 0)
                    throw pageCount;
            }
            catch (...)
            {
                cout << "\nInvalid Input: Exception Caught.\n";
                resetPublication();
                pageCount = 0;
            }
        
    }           

    void displayData()
    {
        cout << "\n============== Book Details ==============" << endl;
        displayPublication();
        cout << "Page Count: " << pageCount << endl;
    }
};

    class Tape : public Publication
    {
    private:
        float playTime;

    public:
        void getData()
        {
            try
            {
                getPublication();

                cout << "Enter playing time (min): ";
                cin >> playTime;

                if (playTime == 0)
                    throw playTime;
            }
            catch (...)
            {
                cout << "\nInvalid Input: Exception Caught.\n";
                resetPublication();
                playTime = 0;
            }
        }
        void displayData()
        {
            cout << "\n============== Tape Details ==============" << endl;
          displayPublication();
          cout << "Playing Time: " << playTime << " minutes" << endl;
        }
    };  

int main(){
        Book b;
        Tape t;

        cout << "Enter Book Details\n";
        b.getData();

        cout << "Enter Tape Details\n";
        t.getData();

        cout << "\n============== Publication Information ==============\n";

        b.displayData();
        t.displayData();

        return 0;
}
