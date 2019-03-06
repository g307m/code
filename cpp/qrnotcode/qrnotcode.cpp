/*
Creation: 1017,20190306
Name(s):  Grant Mulholland
Email(s): grantlmul@gmail.com
*/
#include <iostream>
using namespace std;
//Divides numbers with remainder included.
int main(){
  int divisor,dividend,quotient,remainder;
  cout<<"Enter dividend:";
  cin>>dividend;
  cout<<"Enter divisor:";
  cin>>divisor;
  quotient=dividend/divisor;
  remainder=dividend%divisor;
  cout << "Quotient= " << quotient << endl;
  cout << "Remainder= " << remainder;
  cout << "\n";
  return 0;
}
