#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    int count = 0;
    int sum = 0;
    while (number > 0){
        int digit = number %10;
        sum += digit;
        count++;
        number = number /10;
    }
    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;
}