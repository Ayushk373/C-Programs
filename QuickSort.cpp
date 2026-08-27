#include<iostream> 
#include <algorithm>
using namespace std;
int A[8];
int partition(int l,int h)
{

  int pivot=A[l];
  int i=l-1;
  int j=h+1;
  while(true)
    {
        do
        {
            i++;
        } while(A[i] < pivot);

        do
        {
            j--;
        } while(A[j] > pivot);

        if(i >= j)
            return j;

        swap(A[i], A[j]);
    }
}  

void quickSort(int l,int h)
{
  if(l<h)
  {
    int pi=partition(l,h);
      quickSort(l,pi);
      quickSort(pi+1,h);
  }
}
int main()
{
  cout<<"Enter elements of your array:";
  for(int i=0;i<8;i++)
  {
    cin>>A[i];
  }
  cout<<"Array before swap:";
  for(int i=0;i<8;i++)
  {
    cout<<A[i]<<"\t";
  }
  quickSort(0,7);
  
  cout<<"\n Sorted array:";
  for(int i=0;i<8;i++)
  {
  cout<<A[i]<<"\t";
  }
  return 0;
}
