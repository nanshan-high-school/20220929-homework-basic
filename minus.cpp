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
    if( num1 < 0 && num2 < 0) cout << num0 <<" - " << "(" << num1 << ")" <<" - " << "(" << num2 << ")" << " = " << total; //如果num1與num2都為負數，那num1與num2都要括號//
        else if( num1 < 0) cout << num0 <<" - " << "(" << num1 << ")" <<" - " << num2 << " = " << total; //如果只有num1小於0，num2大於0，那就只有num1要括號//
        else if( num2 < 0) cout << num0 <<" - " << num1 <<" - " << "(" << num2 << ")" << " = " << total; //如果只有num2小於0，num1大於0，那就只有num2要括號//
        else cout << num0 <<" - " << num1 <<" - " << num2 << " = " << total; //其他num1與num2都大於0，則都不用括號//
}