#include <iostream>
using namespace std;
int main(){
    long long N;
    cin >> N;
    if(N<0) N=-N;
    bool found = false;
    while (N > 0){
        int digit = N%10;
        if (digit !=0 && digit % 3 ==0){
        cout << digit << endl;
        found = true;
        break;
        }
        N = N/10;
    }
    if (!found){
    cout << -1 << endl;
}
return 0;
}