#include <iostream>
#include <string>
using namespace std;
int main(){
int roll[100], n, choice, pos, r;
string name [100];
cqpa [100];

cout << "Enter number of students: ";
cin >> n;

for (int i = 0; i < n; i++){
cout << "\nEnter details" << i + 1 << endl;
cout << "Roll No: ";
cin >> roll[i];
cout << "Name: ";
cin >> name [i];
cout << "CGPA: ";
cin >> cgpa[i];
}
do{

cout << "Student Information System" << endl;
cout << "1.Insert Student" << endl;
cout << "2. Delete Student" << endl;
cout << "3. Search Student" << endl;
cout << "4. Display Students" << endl;
cout << "5. Exit" << endl;
cout "Enter your choice: ";
cin >> choice;

switch (choice) {
case 1:
cout << "Enter position (1 to " << n + 1 << "): ";
cin >> pos;

if (pos < 1 || pos > n + 1) {
cout << "Invalid Position" << endl;
break;
}
for (int i = n; i >= pos; i--){
roll [i] = roll[i - 1];
name [i] = name [i - 1];
cgpa[i] = cgpa [i- 1];
}
cout << "Enter Roll No: ";
cin >> roll [pos - 1]
cout << "Enter Name: ";
cin >> name [pos - 1];
cout << "Enter CGPA: ";
cin >> cgpa [pos - 1];

n++;
cout<<"Student Inserted." << endl;
break;

case 2:
cout << "Enter Roll No to Delete: ";
cin >> r;

for (int i = 0; i < n; i++){
  if (roll[i] == r){
    for(int j = i; j < n - 1;j++){
      roll[j] = roll[j + 1];
      name [j]=name[j+1];
      cgpa[j]= cgpa[j+1];
    }
    n--;
    cout << "Student Deleted." << endl;
    break;
  }
}
break;

case 3:
cout << "Enter Roll No to Search: ";
cin >> r;

for (int i = 0; i < < n; n; i++){
  if (roll[i] == r) {
    cout << "\nStudent Found" << endl;
    cout << "Roll No: " << roll[i] << endl;
    cout << "Name: " << name [i] << endl;
    cout << "CGPA:" << cgpa[i] << endl;
    break:
      }  
}

case 4:
cout << "\nStudent Records" << endl;
cout << "Roll No\tName\tCGPA" << endl;

for (int i = 0; i < n; i++) {
cout << roll[i] << "\t" << name [i] << "\t"<< cgpa[i] << endl;
}
break;

case 5:
cout << "Program Ended..." << endl;
break;
default:
    cout << "Invalid Choice!" << endl;
  }
} while (choice != 5);

 return 0;
}
