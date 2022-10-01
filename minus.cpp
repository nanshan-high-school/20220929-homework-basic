#include <iostream>
using namespace std; 

int main() {
    cout << "請輸入被減數。";
    int num0, num1, num2, total;
    cin >> num0;
    cout << "請輸入第一個減數。";
    cin >> num1;
    cout << "請輸入第二個減數。";
    cin >> num2;
    total = num0 - num1 - num2;
    cout << num0 <<" - " << num1 << " - " << num2 << " = " << total;
}