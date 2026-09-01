#include<iostream>
using namespace std;

int main()
{
  int height,base;
  float area;
  
  cout << "Enter Height:";
  cin >> height;
  
  cout << "Enter Base:";
  cin >> base;
  
  area = 0.5*height*base;
  cout << "Area of Triangle :" << area;
  
  return 0;
  }
