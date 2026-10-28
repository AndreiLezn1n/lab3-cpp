#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int num;

    for (int i = 0; i<n; i++){
        cin >> num;
        if (num > 0 && num % 2 == 0){
            sum = sum + num;
        }
    }
    cout << sum << endl;
    return 0;
}