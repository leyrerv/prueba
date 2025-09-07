#include <iostream>
using namespace std;
int main() {
  int number, digit1, digit2;
  cout <<"Give me a two digit natural number : ";
  cin >> number;
  digit1 = number % 10;
  digit2 = number / 10;
  cout << "The addition of the two numbers is "<<(digit1 + digit2)<<endl;
}
