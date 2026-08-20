#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cout << "Enter the no of elements:";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
        for(int i=1;i<n;i++){
            int temp =a[i];
            int j=i-1;

            while(j>=0 && a[j]>temp){
                a[j+1]=a[j];
                j--;
            }

            a[j+1]=temp;
        }

        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }

	return 0;
}
