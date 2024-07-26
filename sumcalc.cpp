// Lets make a simple calculaor which adds numbers
// Lets declare 3 variables a,b,c
// We are gonna take input from the user and store it 

#include <iostream>
using namespace std;
int main() {
    // declaring 3 variables and also their sum
    int a;
    int b;
    int c;
    int sum;

    cout << "Hello, Lets add 3 numbers. Enter your first number \n";
    cin >> a;
    cout << "Enter second number. \n";
    cin >> b;
    cout << "Enter third number. \n";
    cin >> c;
    sum = a + b + c;
    cout << "The sum of these 3 numbers is: " << sum << endl;
    return 0;
}