#include<iostream>
using namespace std;

int main()
{
    int num, rev = 0, rem;

    cout << "Enter a number to be reversed: ";
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << "\nThe reversed number is: " << rev;

return 0;
}