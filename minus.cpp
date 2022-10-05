#include <iostream>
using namespace std; 

int main() {
    cout << "Please enter the minuend:";
    int num0, num1, num2, total;
    cin >> num0;
    cout << "Please enter the first number to subtract:";
    cin >> num1;
    cout << "Please enter the second number to subtract:";
    cin >> num2;
    total = num0 - num1 - num2;
    if( num1 < 0 && num2 < 0) cout << num0 <<" - " << "(" << num1 << ")" <<" - " << "(" << num2 << ")" << " = " << total;
        else if( num1 < 0) cout << num0 <<" - " << "(" << num1 << ")" <<" - " << num2 << " = " << total;
        else if( num2 < 0) cout << num0 <<" - " << num1 <<" - " << "(" << num2 << ")" << " = " << total;
        else cout << num0 <<" - " << num1 <<" - " << num2 << " = " << total;
}