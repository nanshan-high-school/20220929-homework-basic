#include <iostream>
using namespace std;

int main() {
    cout << "請輸入三個要相減的數字";
  
    int num1,num2,num3;
    cin >> num1 >> num2 >> num3;
    cout << num1 << "-" << num2 << "-" << num3 << "=" << num1-num2-num3;
}