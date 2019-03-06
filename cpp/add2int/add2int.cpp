/*
Creation:   0825,20190306
Name(s):  Grant Mulholland,
Email(s): grantlmul@gmail.com,
*/
#include <iostream>

using namespace std;
/*
Asks for 2 integers to add together, then writes the sum
to the cout
*/
int main(){
  int firstNumber, secondNumber, sumNumber;

  cout << "Enter two integers: ";
  cin >> firstNumber >> secondNumber;

  //add firstNumber and secondNumber then store them in sumNumber
  sumNumber = firstNumber + secondNumber;

  //write sum to cout
  cout << firstNumber << "+" << secondNumber << "=" << sumNumber;
  cout <<"\n";
  return 0;
}
