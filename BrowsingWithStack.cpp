#include <iostream>
#include <string>
using namespace std;

#define MAX 5

class Stack
{
public:
    string A[MAX];
    int top;

    Stack()
    {
        top = -1;
    }

    bool isFull()
    {
        if (top == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }   
        else
        {
            return false;
        }
    }
    
    void push(string url)
    {
        if (isFull())
        {
            cout << "\nHistory is full! Cannot visit more pages." << endl;
        }
        else
        {
            top++;
            A[top] = url;
            cout << "\nPage visited: " << url << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "\nHistory is empty! No pages to go back to." << endl;
        }
        else
        {
            cout << "\nPage deleted/left: " << A[top] << endl;
            top--;
        }
    }

    void currentPage()
    {
        if (isEmpty())
        {
            cout << "\nNo page is currently open." << endl;
        }
        else
        {
            cout << "\nCurrent page: " << A[top] << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "\nHistory is empty." << endl;
        }
        else
        {
            cout << "\n--- Browsing History ---" << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << "- " << A[i] << endl;
            }
            cout << "------------------------" << endl;
        }
    }
};

int main()
{ 
    Stack s1;
    int choice;
    string url;

    do
    {
        cout << "\n=== BROWSER HISTORY MENU ===" << endl;
        cout << "1. Visit New Page (Push)" << endl;
        cout << "2. Go Back (Pop)" << endl;
        cout << "3. View Current Page" << endl;
        cout << "4. Display History" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Clear input buffer to handle string inputs properly
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter page name/URL: ";
            getline(cin, url);
            s1.push(url);
            break;

        case 2:
            s1.pop();
            break;

        case 3:
            s1.currentPage();
            break;

        case 4:
            s1.display();
            break;

        case 5:
            cout << "\nExiting program. Goodbye!" << endl;
            break;

        default:
            cout << "\nInvalid choice! Please enter a number between 1 and 5." << endl;
        }

    } while (choice != 5);

    return 0;
}
