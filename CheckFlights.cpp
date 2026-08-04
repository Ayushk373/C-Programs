#include <iostream>
using namespace std;

int main()
{
    int A[5] = {224, 566, 766, 864, 1733};
    int i, flight_no, flag = 0;

    cout << "\nFlights are:\n";

    for (i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";
    }

    cout << "\nEnter flight no to be searched: ";
    cin >> flight_no;

    for (i = 0; i < 5; i++)
    {
        if (A[i] == flight_no)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "\nFlight " << flight_no << " is found.";
    else
        cout << "\nFlight " << flight_no << " is not found.";

    return 0;
}
