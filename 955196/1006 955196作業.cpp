#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "輸入數字";
  cin >> num;
  int num2 = num % 3;
  if (num2 == 0) {
    cout << "三的倍數";
  }else if (num2 == 1) {
    cout << "除以三餘一";
  }else {
    cout << "除以三餘二";
  }
  
}