#include <iostream>
using namespace std;

double getInput();
char getSymbol();

int main() 
{

  double a = getInput();
  double b = getInput();
  char c = getSymbol(); 

  double result;
  if (c == '+') result = a + b;
  else if (c == '-') result = a - b;
  else if (c == '*') result = a * b;
  else if (c == '/') result = a / b;
  else
  {
    cout << "You did not type the right mathematical symbol;=";
    return 0;    
  }

  cout << a << " " << c << " " << b << " is " << result << endl;

  return 0;
  
}


double getInput()
{
  cout << "Enter a double value: ";
  double a;
  cin >> a;
  return a;
}

char getSymbol()
{
  cout << "Enter one of the following: + - * /: ";
  char c;
  cin >> c;
  return c;
}
