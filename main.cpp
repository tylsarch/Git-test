//Name:Tyler Archer
//Date: 31 March 2016
//File: main.cpp
//Description: Simple hello world to test git

#include <iostream>

using namespace std;

int sum(int value);

int main()
{
  int n;

  cout << "Hello World!" << endl;
  cout << endl;

  cout << "Enter a number: ";
  cin >> n;

  cout << sum(n) << endl;

}


int sum(int value)
{
  int total = 0;

  for(int i = 1; i <= value; i++)
    {
      total += i;
    }

  return total;
}
