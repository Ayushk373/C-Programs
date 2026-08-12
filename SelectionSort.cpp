#include<iostream> 
using namespace std;
int main() {
    int A[5] , i, j , min ;
    cout << "Enter 5 numbers: ";
    for(i=0;i<5;i++){
        cin >> A[i];
    }
    for(i=0;i<5;i++) {
        min = i;
        for(j=i+1;j<5;j++) {
            if(A[j] < A[min])
                min = j;
        }
        if(min != i) {
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
    cout << "Sorted array: ";
    for(i=0;i<5;i++)
        cout << A[i] << " ";
    return 0;
}
