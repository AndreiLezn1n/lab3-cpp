#include <iostream>
using namespace std;
int main()
{
    int number;
    do{
        cout <<"Enter number from 1 to 100: ";
        cin >> number;
        if (number < 1 || number > 100)
        {
    cout << "error" << endl;
}
    }
    while (number <1 || number > 100);
    cout << "Accepted" << endl;
    return 0;
} 