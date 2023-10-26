#include<iostream>
using namespace std;
int main()
{
  int num1, num2, num3;
  
  cout << "Enter three Numbers :: ";
  cin >> num1 >> num2 >> num3;

  if(num2 > num1 && num3 > num2){
    cout << "Numbers are in order";
  }
  else if (num1 > num2 && num2 > num3){
    cout << "Numbers are in order";
  }
  else{
    cout << "Numbers are NOT in order";
  }
  
  return 0;
}
