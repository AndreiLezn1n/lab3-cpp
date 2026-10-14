#include <iostream>
using namespace std;
bool isPositive(int number)
{
    return number > 0;
}
bool isThreeDigit(int number) {
    if (number <0) number = -number;
    return (number >= 100&& number <= 999);
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Pozitive: ";
    if (isPositive(number)) {
        cout <<"yes"<< endl;
    }
    else {
        cout << "no" << endl;
    }
    cout << "Three-Digit: ";
    if (isThreeDigit(number)) {
        cout <<"yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}