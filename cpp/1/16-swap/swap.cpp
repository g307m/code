/*
Creation: 1349,20190306
Name(s):  Grant Mulholland
Email(s): grantlmul@gmail.com
*/
#include <iostream>
using namespace std;
/*
Swaps the integers 'a' and 'b' using 'temp'.
*/
int main(){
    int a,b,temp;
    // Look, Ma! I wrote my *own* code! //
    cout<<"Set variable A: ";
    cin>>a;
    cout<<"Set variable B: ";
    cin>>b;

    cout<<"Before swapping: "<<endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp=a;
    a=b;
    b=temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
