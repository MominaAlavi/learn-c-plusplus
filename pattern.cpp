#include <iostream>
using namespace std;
int main()
{
  int number;
  string colorpart1="\x1b[";
  int count=32;
  string colorletter="m";
  cout << "Enter the number of digits you want to print:";
  cin >> number;
  for(int i=1;i<=number; i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<colorpart1<<count<<colorletter<<j;
      count++;
      
    }
    cout<<"\n";
  }
  for(int i=number-1;i>=1;i--)
  {
    for (int j=1;j<=i;j++)
    {
      cout<<colorpart1<<count<<colorletter<<j;
    }
    cout<<"\n";
  }
  return 0;
}
