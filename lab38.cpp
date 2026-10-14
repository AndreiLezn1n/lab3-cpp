#include <iostream>
using namespace std;

    int sum(int a,int b)
    {
        return a + b;
}
int difference(int a,int b){
     return a + b;
}
int multiply(int a,int b){
    return a * b;
}
int main()
{
    int x;
    int y;
    cout << "Enter two number: ";
    cin >> x >> y;
    cout << "Sum: " << sum(x,y) << endl;
    cout << "Difference: " <<difference(x,y) << endl;
    cout << "Product: " << multiply(x,y) << endl;
    return 0;
}