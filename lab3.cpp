#include <iostream>
using namespace std;

int main()
{
    int N;
    cout <<"Enter N: ";
    cin >> N;
    cout << "От 1 до N: ";
    for (int i=1; i <=N;i++){
        cout << i << " ";
    }
    cout << endl;

    cout << "От N до 1";
    for (int i=N;i >=1;i--){
        cout << i << " ";
    }
cout << endl;

return 0;
}